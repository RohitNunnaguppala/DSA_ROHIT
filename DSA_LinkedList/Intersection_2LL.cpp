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

node* findintersection(node* head1,node* head2){
    if(head1==nullptr||head2==nullptr){
        return nullptr;
    }
    node* temp1=head1;
    node* temp2=head2;
    while(temp1!=temp2){
        temp1=temp1->next;
        temp2=temp2->next;

        if(temp1==temp2) return temp1;
        if(temp1==nullptr) temp1=head2;
        if(temp2==nullptr) temp2=head1;
    }
    return temp1;
}

int main() {
    vector<int> a1 = {1, 2, 3, 4, 5};
    vector<int> a2 = {6, 7,3,4,5};

    node* head1 = convertarr2ll(a1);
    node* head2 = convertarr2ll(a2);
    node* intersection = findintersection(head1, head2);
    printll(intersection);
    return 0;

}
