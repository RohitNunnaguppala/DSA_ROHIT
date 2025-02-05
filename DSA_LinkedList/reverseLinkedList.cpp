#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int data1,node* next1){
        data=data1;
        next=next1;
    }
    
    node (int data1){
        data=data1;
        next=nullptr;
    }
};

node* reverseLinkedList(node* head){
    node* temp=head;
    stack<int> s;
    while(temp!=nullptr){
        s.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=nullptr){
        temp->data=s.top();
        s.pop();
        temp=temp->next;
    }
    return head;
}

node* reversell(node* head){
    node* temp=head;
    node* prev=nullptr;
    while(temp!=nullptr){
        node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}

void printLinkedList(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    vector<int> arr = {2, 5, 8, 7};
    
    node* head = new node(arr[0]);
    head->next = new node(arr[1]);
    head->next->next = new node(arr[2]);
    head->next->next->next = new node(arr[3]);
    
    cout << "Original Linked List: ";
    printLinkedList(head);

    head = reversell(head);

    cout << "Reversed Linked List: ";
    printLinkedList(head);

    return 0;
}