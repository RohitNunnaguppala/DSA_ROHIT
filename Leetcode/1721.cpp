#include<bits/stdc++.h>
using namespace std;

ListNode* swapNodes(ListNode* head, int k) {
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        ListNode* kth = nullptr;
        for (int i = 1; i < k; ++i) {
            if (ptr1->next != nullptr) {
                ptr1 = ptr1->next;
            } else {
                return head;
            }
        }

        kth = ptr1;  
        while (ptr1->next != nullptr) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        swap(kth->val, ptr2->val);

        return head;
    }