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

Node* deleteAllOccurrences(Node* head, int k) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == k) {
            if (temp == head) {
                head = temp->next;
                if (head != nullptr) {
                    head->back = nullptr;
                }
                delete temp;
                temp = head;
            } else {
                Node* nextNode = temp->next;
                Node* prevNode = temp->back;
                if (nextNode != nullptr) nextNode->back = prevNode;
                if (prevNode != nullptr) prevNode->next = nextNode;
                delete temp;
                temp = nextNode;
            }
        } else {
            temp = temp->next;
        }
    }
    return head;
}

int main() {
    vector<int> arr = {4, 5, 6, 5, 7, 5, 8};
    Node* head = convertArr2DLL(arr);

    cout << "Original list: ";
    print(head);

    int key = 5;
    head = deleteAllOccurrences(head, key);

    cout << "List after deleting all occurrences of " << key << ": ";
    print(head);

    return 0;
}
