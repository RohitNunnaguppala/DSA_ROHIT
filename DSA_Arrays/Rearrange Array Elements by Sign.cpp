#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos,neg,res;

        for(int n:nums){
            if(n>0){
                pos.push_back(n);
            }
            else{
                neg.push_back(n);
            }
        }

        for(int i=0;i<pos.size();i++){
            res.push_back(pos[i]);
            res.push_back(neg[i]);
        }
        return res;
}
int main() {
    vector<int> nums={3,1,-2,-5,2,-4};
    vector<int> res1=rearrangeArray(nums);
    for(int i=0;i<res1.size();i++){
        cout<<res1[i]<<" ";
    }
    return 0;
}