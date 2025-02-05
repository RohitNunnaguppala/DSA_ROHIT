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

int checkifPresent(node* head,int k){
    node* temp=head;
    while(temp!=nullptr){
        if(temp->data==k){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}
int main(){
    vector<int> arr = {2, 5, 8, 7};
    
    node* head = new node(arr[0]);
    head->next = new node(arr[1]);
    head->next->next = new node(arr[2]);
    head->next->next->next = new node(arr[3]);
    
    int val = 5; 
    
    cout << checkifPresent(head, val) << '\n';
    return 0;
}