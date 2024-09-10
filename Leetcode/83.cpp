#include<bits/stdc++.h>
using namespace std;

ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head; 
        while (temp != nullptr && temp->next != nullptr) {
            if (temp->val == temp->next->val) { 
                ListNode* duplicate = temp->next;
                temp->next = temp->next->next;
                delete duplicate; 
            } else {
                temp = temp->next;
            }
        }
        return head;
}