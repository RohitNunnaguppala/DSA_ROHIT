#include<bits/stdc++.h>
using namespace std;

ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;

        ListNode* prev=dummy;
        ListNode* current=head;
        for(int i=0;i<left-1;i++){
            prev=prev->next;
            current=current->next;
        }

        ListNode* sublist=current;
        ListNode* prevnode=nullptr;
        for(int i=0;i<=right-left;i++){
            ListNode* nextnode=current->next;
            current->next=prevnode;
            prevnode=current;
            current=nextnode;
        }
        prev->next=prevnode;
        sublist->next=current;

        return dummy->next;
    }