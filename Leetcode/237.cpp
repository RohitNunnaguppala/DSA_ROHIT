#include<bits/stdc++.h>
using namespace std;



void deleteNode(ListNode* node) {
        if (node == nullptr || node->next == nullptr) {
            return;
        }
        node->val=node->next->val;
        ListNode* temp=node->next;
        node->next=node->next->next;

        delete temp;
}