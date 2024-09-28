#include<bits/stdc++.h>
using namespace std;

ListNode* partition(ListNode* head, int x) {
        ListNode* small=new ListNode(-1);
        ListNode* large=new ListNode(-1);

        ListNode* smallp=small;
        ListNode* largep=large;
        while(head!=0){
            if(head->val<x){
                smallp->next=head;
                smallp=smallp->next;
            }
            else{
                largep->next=head;
                largep=largep->next;
            }
            head=head->next;
        }
        smallp->next=large->next;
        largep->next=nullptr;
        return small->next;
}