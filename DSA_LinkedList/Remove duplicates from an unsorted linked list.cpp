#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

void removeDuplicates(Node* head) {
    if (!head) return;

    unordered_set<int> seen;
    Node* current = head;
    Node* prev = NULL;

    while (current) {
        if (seen.find(current->data) != seen.end()) {
            prev->next = current->next; 
            delete current;
        } else {
            seen.insert(current->data);
            prev = current;
        }
        current = prev->next;  
    }
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = new Node(5);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(4);

    cout << "Original list: ";
    printList(head);

    removeDuplicates(head);

    cout << "List after removing duplicates: ";
    printList(head);

    return 0;
}
