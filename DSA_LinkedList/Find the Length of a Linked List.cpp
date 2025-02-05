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

int lengthOfLinkedList(node* head){
    node* temp=head;
    int cnt=0;
    while(temp!=nullptr){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
int main(){
    vector<int> arr = {2, 5, 8, 7};
    
    node* head = new node(arr[0]);
    head->next = new node(arr[1]);
    head->next->next = new node(arr[2]);
    head->next->next->next = new node(arr[3]);
    
    cout << lengthOfLinkedList(head) << '\n';
}