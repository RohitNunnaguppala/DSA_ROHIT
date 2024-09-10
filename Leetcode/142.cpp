#include<bits/stdc++.h>
using namespace std;

ListNode *detectCycle(ListNode *head) {
    ListNode* slow = head;  
    ListNode* fast = head; 
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;        
        fast = fast->next->next;  
        if (slow == fast) {
            while(head!=slow){
                head=head->next;
                slow=slow->next;
            }
            return slow;  
        }
    }
    return NULL; 
    }