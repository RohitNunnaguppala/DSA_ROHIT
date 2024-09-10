#include<bits/stdc++.h>
using namespace std;

 ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* current = head;
        while (current != nullptr) {
            if (current->next != nullptr && current->val == current->next->val) {
                while (current->next != nullptr && current->val == current->next->val) {
                    current = current->next;
                }
                prev->next = current->next;
            } else {
                prev = prev->next;
            }
            current = current->next;
        }
        return dummy->next;
    }