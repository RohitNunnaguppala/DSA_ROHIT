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

int lengthLL(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp!=nullptr){
        //cout<<temp->data<<" ";
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

int checkifpresent(Node* head,int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val)  return 1;
        temp=temp->next;
    }
    return 0;
} 
int main(){
    vector<int> a={2,5,7,8};
    // Node* y = new Node(a[0],nullptr);
    // cout<<y<<endl;
    // cout<<y->data<<endl;

    Node* head=convertArr2LL(a);
    //cout<<head->data<<endl;

    // Node* temp=head;
    // while(temp!=nullptr){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    // cout<<endl;

    //cout<<lengthLL(head)<<endl;
    
    cout<<checkifpresent(head,5)<<endl;
    cout<<checkifpresent(head,15);
    return 0;
}