#include<bits/stdc++.h>
using namespace std;

int helpfun(vector<int> nums,int goal){
    int n = nums.size();
    if(goal<0){
        return 0;
    }
    int l = 0, r = 0, sum = 0, cnt = 0;
    while(r<n){
        sum+=nums[r];
        while(sum>goal){
            sum=sum-nums[l];
            l=l+1;
        }
        cnt=cnt+(r-l+1);
        r=r+1;
    }
    return cnt;
}

int numSubarraysWithSum(vector<int>& nums, int goal) {
    int res=helpfun(nums,goal)-helpfun(nums,goal-1);
    return res;
}

int main(){
    vector<int> nums = {1,0,1,0,1};
    int goal = 2;
    cout<<numSubarraysWithSum(nums,goal)<<endl;
}