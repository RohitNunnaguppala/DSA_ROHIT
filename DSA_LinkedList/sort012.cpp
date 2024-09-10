#include<bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;   
    Node* next;     
    Node* back;     

    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int> arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;            

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp; 
        prev = temp;       
    }
    return head;  
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";  
        head = head->next;         
    }
}

Node* sort012(Node* head){
    if(head==nullptr||head->next==nullptr){
            return head;
    }

    Node* zerohead=new Node(-1);
    Node* onehead=new Node(-1);
    Node* twohead=new Node(-1);
    Node* zero=zerohead;
    Node* one=onehead;
    Node* two=twohead;

    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data==0){
            zero->next=temp;
            zero=temp;
        }
        if(temp->data==1){
            one->next=temp;
            one=temp;
        }
        if(temp->data==2){
            two->next=temp;
            two=temp;
        }
        temp=temp->next;
    }
    zero->next=(onehead->next!=nullptr)?onehead->next:twohead->next;
    one->next=twohead->next;
    two->next=nullptr;
    Node* newhead=zerohead->next;

    delete zerohead;
    delete onehead;
    delete twohead;

    return newhead;
}

int main() {
    vector<int> arr = {1, 2, 0, 1, 2, 0, 1};
    Node* head = convertArr2DLL(arr);
    head =sort012(head);
    print(head);

    return 0;
}

