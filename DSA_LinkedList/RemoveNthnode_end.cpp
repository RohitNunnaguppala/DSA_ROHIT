#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
      int data;
      Node* next;

      public:
      Node(int data1,Node* next1){
        data=data1;
        next=next1;
      }

      Node(int data1){
        data=data1;
        next=nullptr;
      }

};
Node* convertArr2LL(vector<int> &a){
    Node* head=new Node(a[0]);
    Node* mover=head;
    for(int i=1;i<a.size();i++){
        Node* temp=new Node(a[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void printll(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* removeNth(Node* head,int n){
    Node* fast=head;
    Node* slow=head;

    for (int i = 0; i < n; i++)
        fast = fast->next;

    if (fast==nullptr)
        return head->next;

    while (fast->next != nullptr) {
        fast=fast->next;
        slow=slow->next;
    }

    Node* delNode = slow->next;
    slow->next = slow->next->next;
    delete delNode;
    return head;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6};
    int n=2;
    Node* head = convertArr2LL(arr);
    head =removeNth(head,n);
    printll(head);

    return 0;
}
