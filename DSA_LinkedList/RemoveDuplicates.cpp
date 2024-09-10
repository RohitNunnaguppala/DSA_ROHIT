#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1 = nullptr, Node* back1 = nullptr) {
        data = data1;
        next = next1;
        back = back1;
    }
};

Node* convertArr2DLL(vector<int>& arr) {
    if (arr.empty()) return nullptr;
    
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* removeDuplicates(Node* head)     {
    Node* temp = head;
    
    while (temp != nullptr && temp->next != nullptr) {
        Node* nextNode = temp->next;
        while (nextNode != nullptr && nextNode->data == temp->data) {
            Node* duplicate = nextNode;
            nextNode = nextNode->next;
            free(duplicate);
        }
        temp->next = nextNode;
        if (nextNode != nullptr) {
            nextNode->back = temp;
        }
        
        temp = temp->next;
    }
    
    return head;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5, 6};
    Node* head = convertArr2DLL(arr);

    cout << "Original list: ";
    print(head);

    head = removeDuplicates(head);

    cout << "List after removing duplicates: ";
    print(head);

    return 0;
}
