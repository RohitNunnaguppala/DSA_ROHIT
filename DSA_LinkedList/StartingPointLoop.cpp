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

node* convertarr2ll(vector<int>& a) {
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

node* firstNode(node* head) {
    node* slow = head;
    node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    node* head = convertarr2ll(arr);

    node* second = head->next;
    node* third = second->next;
    node* fourth = third->next;
    node* fifth = fourth->next;

    fifth->next = third;

    node* cycleNode = firstNode(head);
    if (cycleNode != NULL) {
        cout << "Cycle detected at node with value: " << cycleNode->data << endl;
    } else {
        cout << "No cycle detected." << endl;
    }

    return 0;
}
