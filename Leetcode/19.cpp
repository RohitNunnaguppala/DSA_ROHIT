#include<bits/stdc++.h>
using namespace std;

ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fastp = head;
        ListNode* slowp = head;

        for (int i = 0; i < n; ++i) {
            if (fastp == nullptr)
                return head;
            fastp = fastp->next;
        }

        if (fastp == nullptr)
            return head->next;

        while (fastp->next != nullptr) {
            fastp = fastp->next;
            slowp = slowp->next;
        }

        ListNode* delNode = slowp->next;
        slowp->next = slowp->next->next;
        delete delNode;

        return head;
    }