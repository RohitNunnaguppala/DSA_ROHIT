#include <bits/stdc++.h>
using namespace std;

int single(vector<int>& nums){
    int n=nums.size();
    if(n==1){
        return nums[0];
    }
    if(nums[0]!=nums[1]){
        return nums[0];
    }
    if(nums[n-1]!=nums[n-2]){
        return nums[n-1];
    }
    int l=1;
    int h=n-2;
    while(l<=h){
        int m=(l+h)/2;
        if(nums[m]!=nums[m+1]&&nums[m]!=nums[m-1]){
            return nums[m];
        }
        if((m%2==1&&nums[m]==nums[m-1])||(m%2==0&&nums[m]==nums[m+1])){
            h=m+1;
        }
        else{
            h=m-1;
        }
    }
    return -1;
}
int main(){
    vector<int> nums={1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans=single(nums);
    cout<<ans;
    return 0;
}