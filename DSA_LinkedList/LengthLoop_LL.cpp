#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

Node* convertArrToLL(vector<int>& a) {
    Node* head = new Node(a[0]);
    Node* mover = head;
    for (int i = 1; i < a.size(); i++) {
        Node* temp = new Node(a[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int findCycleLength(Node* slow) {
    int count = 1;
    Node* temp = slow->next;
    while (temp != slow) {
        count++;
        temp = temp->next;
    }
    return count;
}

int detectCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return findCycleLength(slow);
        }
    }
    return 0;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArrToLL(arr);

    Node* second = head->next;
    Node* third = second->next;
    Node* fourth = third->next;
    Node* fifth = fourth->next;

    fifth->next = third;  

    int cycleLength = detectCycle(head);
    if (cycleLength > 0) {
        cout << "Cycle detected in the linked list! Length of the cycle: " << cycleLength << endl;
    } else {
        cout << "No cycle detected in the linked list." << endl;
    }

    return 0;
}
