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

Node* findTail(Node* head) {
    Node* tail = head;
    while (tail->next != nullptr)
        tail = tail->next;
    return tail;
}

vector<pair<int, int>> findPairs(Node* head, int k) {
    vector<pair<int, int>> ans;
    if (head == nullptr) return ans;

    Node* left = head;
    Node* right = findTail(head);

    while (left != nullptr && right != nullptr && left != right && left->data < right->data) {
        int sum = left->data + right->data;
        if (sum == k) {
            ans.push_back({left->data, right->data});
            left = left->next;
            right = right->back;
        } else if (sum < k) {
            left = left->next;
        } else {
            right = right->back;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Node* head = convertArr2DLL(arr);

    cout << "Original list: ";
    print(head);

    int targetSum = 10;
    vector<pair<int, int>> pairs = findPairs(head, targetSum);

    cout << "Pairs with sum " << targetSum << ": ";
    for (auto& p : pairs) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    return 0;
}
