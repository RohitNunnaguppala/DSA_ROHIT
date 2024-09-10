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
    Node() {
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


Node* addtwonum(Node* head1,Node*head2){
    Node* dummy=new Node(-1);
    Node* current=dummy;
    Node* temp1=head1;
    Node* temp2=head2;
    int carray=0;
    while(temp1!=nullptr||temp2!=nullptr){
        int sum=carray;
        if(temp1) sum+=temp1->data;
        if(temp2) sum+=temp2->data;

        Node* newnode=new Node(sum%10);
        carray=sum/10;
        current->next=newnode;
        current=current->next;
        if(temp1) temp1=temp1->next;
        if(temp2) temp2=temp2->next;
    }
    if(carray){
        Node* newnode=new Node(carray);
        current->next=newnode;
    }
    return dummy->next;
}
int main() {
    vector<int> arr1 = {2,4,3};
    vector<int> arr2 = {5,6,4};
    Node* head1 = convertArr2DLL(arr1);
    Node* head2= convertArr2DLL(arr2);
    Node* head = addtwonum(head1,head2);
    print(head);

    return 0;
}