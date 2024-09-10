#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    public:
    node(int data1,node* next1){
         data=data1;
         next=next1;
    }

    node(int data1){
         data=data1;
         next=nullptr;
    }
};

node* convertarr2ll(vector<int> &a){
    node* head=new node(a[0]);
    node* mover=head;
    for(int i=1;i<a.size();i++){
        node* temp=new node(a[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void printll(node* head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node* reverselinkedlist(node* head){
    if(head==nullptr||head->next==nullptr) return head;
    node* newhead=reverselinkedlist(head->next);
    node* front=head->next;
    front->next=head;
    head->next=nullptr;
    return newhead;
}

bool ispalindrome(node* head){
    if(head==nullptr||head->next==nullptr) return true;
    node* slow=head;
    node* fast=head;
    while(fast->next!=nullptr && fast->next->next!=nullptr){
          slow=slow->next;
          fast=fast->next->next;
    }
    node* newhead=reverselinkedlist(slow->next);
    node* first=head;
    node* second=newhead;
    while(second!=nullptr){
        if(first->data!=second->data){
            reverselinkedlist(newhead);
            return false;
        }
        first=first->next;
        second=second->next;
    }
    reverselinkedlist(newhead);
    return true;
}

int main() {
    vector<int> arr = {1, 2, 0, 1, 2, 0, 1};
    node* head = convertarr2ll(arr);
    bool sol=ispalindrome(head);
    cout<<sol<<endl;

    return 0;
}

