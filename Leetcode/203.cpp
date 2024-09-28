#include<bits/stdc++.h>
using namespace std;



ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy=new ListNode(-1,head);
        ListNode* curr=dummy;
        while(curr->next!=nullptr){
            if(curr->next->val==val){
                curr->next=curr->next->next;
            }
            else{
                curr=curr->next;
            }
        }
        return dummy->next;
}