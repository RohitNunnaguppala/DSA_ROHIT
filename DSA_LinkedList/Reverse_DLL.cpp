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

Node* reverseDLL(Node* head){
      if(head==nullptr||head->next==nullptr){
        return head;
      }

      Node*prev=nullptr;
      Node*current=head;

      while(current!=nullptr){
        prev=current->back;
        current->back=current->next;
        current->next=prev;
        current=current->back;
      }

      return prev->back;
}

int main() {
    vector<int> arr = {12, 5, 8, 7, 4};
    Node* head = convertArr2DLL(arr);
    head = reverseDLL(head);
    print(head);

    return 0;
}