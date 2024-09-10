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

Node* removeshead(Node* head){
    if(head==nullptr) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node* deleteTail(Node* head){
    if(head==nullptr || head->next==nullptr){
        return nullptr;
    }
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}     

Node* deletek(Node* head,int k){
    if(head==nullptr) return head;
    if(k==1){
        Node*temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k){
        prev->next=prev->next->next;
        delete temp;
        break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node* removesEl(Node* head,int el){
    if(head==nullptr) return head;
    if(head->data==el){
        Node* temp=head;
        head=head->next;
        delete head;
        return head;
    }

    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr){
        if(temp->data==el){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;

    }
    return head;
}

Node* inserthead(Node* head,int val){
    Node*temp=new Node(val,head);
    return temp; 
}

Node* inserttail(Node* head,int val){
    if(head==nullptr) return nullptr;
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* newnode=new Node(val);
    temp->next=newnode;

    return head;
}

Node* insertkthpos(Node* head,int val){
    
}
int main(){
    vector<int> a={2,3,4,5};
    Node* head=convertArr2LL(a);
    // head=removeshead(head);
    // printll(head);

    // head=deleteTail(head);
    // printll(head);

    // head=deletek(head,4);
    // printll(head);

    // head=removesEl(head,4);
    // printll(head);

    // head=inserthead(head,1);
    // printll(head);

    head=inserttail(head,6);
    printll(head);
}
