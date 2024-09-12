#include<bits/stdc++.h>
using namespace std;

int getDecimalValue(ListNode* head) {
        int res=0;
        while(head!=nullptr){
            res*=2;
            res+=head->val;
            head=head->next;
        }
        return res;
}