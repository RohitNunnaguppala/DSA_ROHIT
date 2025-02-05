
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Node class represents a
// node in a linked list
class Node {
public:
    // Data stored in the node
    int data;   
    
    // Pointer to the next node in the list
    Node* next;      

    // Constructor with both data and
    // next node as parameters
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data as a
    // parameter, sets next to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to reverse a linked list
// using the recursive approach
Node* reverseLinkedList(Node* head) {
    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr){
        Node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}

bool isPalindrome(Node* head) {
    Node* slow=head;
    Node* fast=head;
    
    while(fast->next!=nullptr &&fast->next->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    
    Node* newhead=reverseLinkedList(slow->next);
    
    Node* first=head;
    Node* second=newhead;
    while(second!=nullptr){
        if(first->data!=second->data){
            reverseLinkedList(newhead);
            return false;
        }
        first=first->next;
        second=second->next;
    }
    
    reverseLinkedList(newhead);
    return true;
}



// Function to print the linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create a linked list with
    // values 1, 5, 2, 5, and 1 (15251, a palindrome)
    Node* head = new Node(1);
    head->next = new Node(5);
    head->next->next = new Node(2);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(1);

    // Print the original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Check if the linked list is a palindrome
    if (isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}

