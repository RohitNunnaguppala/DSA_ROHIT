#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data1, node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

node* convertarr2ll(vector<int> &a) {
    node* head = new node(a[0]);
    node* mover = head;
    for (int i = 1; i < a.size(); i++) {
        node* temp = new node(a[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printll(node* head) {
    node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int addhelper(node* temp) {
    if (temp == nullptr) {
        return 1;
    }
    int carry = addhelper(temp->next);
    temp->data += carry;
    if (temp->data < 10) {
        return 0;
    }
    temp->data = 0; 
    return 1;
}

node* addone(node* head) {
    int carry = addhelper(head);
    if (carry == 1) {
        node* newnode = new node(1);
        newnode->next = head;
        head = newnode;
    }
    return head;
}

int main() {
    vector<int> arr = {6,9,9};
    node* head = convertarr2ll(arr);
    head = addone(head);
    printll(head);

    return 0;
}
