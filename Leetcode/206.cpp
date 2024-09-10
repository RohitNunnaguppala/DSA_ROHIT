#include<bits/stdc++.h>
using namespace std;


ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) {
        return head;
    }
    ListNode* prev=nullptr;
    ListNode* current=head;
    ListNode* next=nullptr;
    while(current!=nullptr){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;

    }