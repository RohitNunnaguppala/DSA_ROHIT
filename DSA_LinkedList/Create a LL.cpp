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

int main(){
    vector<int> a={2,3,4,5};
    node* y=new node(a[0]);
    cout<<y<<"\n";
    cout<<y->data<<"\n";
}