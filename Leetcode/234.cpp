#include<bits/stdc++.h>
using namespace std;

ListNode* reverseLinkedList(ListNode* head) {
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

bool isPalindrome(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return true; 
    }
    
    ListNode* slow = head;
    ListNode* fast = head;
    
    while (fast != NULL && fast->next!= NULL) {
        slow = slow->next;  
        fast = fast->next->next;  
    }
    if(fast!=nullptr){
        slow=slow->next;
    }

     slow = reverseLinkedList(slow);
     fast = head;  
    
    while (slow != NULL) {
        if (fast->val != slow->val) { 
            return false;
        }
        fast = fast->next; 
        slow = slow->next;  
    } 
    return true;  
}