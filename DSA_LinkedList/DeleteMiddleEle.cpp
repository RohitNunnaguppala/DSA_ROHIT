#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data1, node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

node* convertarr2ll(vector<int> &a) {
    node* head = new node(a[0]);
    node* mover = head;
    for (int i = 1; i < a.size(); i++) {
        node* temp = new node(a[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printll(node* head) {
    node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node* deleteMiddle(node* head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr;
    }

    node* slow = head;
    node* fast = head;
    node* prev = nullptr;

    fast = head->next->next;
    while (fast != nullptr && fast->next != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (prev != nullptr) {
        prev->next = slow->next;
    }

    return head;
}

int main() {
    vector<int> arr = {5,6,1,7,6,1};
    node* head = convertarr2ll(arr);
    head = deleteMiddle(head);
    printll(head);

    return 0;
}
