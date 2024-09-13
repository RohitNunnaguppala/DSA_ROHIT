#include<bits/stdc++.h>
using namespace std;



ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* prev = dummy; 
            ListNode* next = curr->next; 
            while (prev->next != nullptr && prev->next->val < curr->val) {
                prev = prev->next;
            }
            curr->next = prev->next;
            prev->next = curr;
            curr = next;
        }
        return dummy->next;
    }