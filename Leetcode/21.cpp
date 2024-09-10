#include<bits/stdc++.h>
using namespace std;


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* dummynode = new ListNode(-1);  
        ListNode* temp = dummynode;

        while (t1 != nullptr && t2 != nullptr) {
            if (t1->val < t2->val) {  
                temp->next = t1;
                temp = t1;
                t1 = t1->next;
            } else {
                temp->next = t2;
                temp = t2;
                t2 = t2->next;
            }
        }

        if (t1) {
            temp->next = t1;
        } else {
            temp->next = t2;
        }

        return dummynode->next;
    }