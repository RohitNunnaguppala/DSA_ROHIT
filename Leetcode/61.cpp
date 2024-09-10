#include<bits/stdc++.h>
using namespace std;

ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr || k == 0) return head;
        
        ListNode* temp = head;
        int length = 1;
        while(temp->next != nullptr) {
            ++length;
            temp = temp->next;
        }
        
        temp->next = head;
        k = k % length;
        int end = length - k;
        while(end--) temp = temp->next;
        
        head = temp->next;
        temp->next = nullptr;
        
        return head;
    }