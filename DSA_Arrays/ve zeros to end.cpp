#include<bits/stdc++.h>
using namespace std;

void negtoend(vector<int> &nums){
    int n=nums.size();
    vector<int> res;
    
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            res.push_back(nums[i]);
        }
    }
    
    for(int i=0;i<n;i++){
        if(nums[i]<=0){
            res.push_back(nums[i]);
        }
    }
    
    for(int i=0;i<n;i++){
        nums[i]=res[i];
    }
    
}

void movenegtoend(vector<int>& nums) {
    int n=nums.size();
    int left = 0,right = 0;

    while(right<n){
        if(nums[right]>=0){
            swap(nums[left],nums[right]);
            left++;
        }
        right++;
    }
}
int main() {
    vector<int> nums={-5, 7, -3, -4, 9, 10, -1, 11};
    movenegtoend(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}