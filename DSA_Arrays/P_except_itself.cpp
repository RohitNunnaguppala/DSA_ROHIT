
#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n);
        vector<int> right(n);
        vector<int> ans(n);

        left[0]=1;
        for(int i=1;i<n;i++){
            left[i]=left[i-1]*nums[i-1];
        }

        right[n-1]=1;
        for(int i=n-2;i>-1;i--){
            right[i]=right[i+1]*nums[i+1];
        }

        for(int i=0;i<n;i++){
            ans[i]=left[i]*right[i];
        }
        return ans;
}
    
int main() {
    vector<int> nums={1,2,3,4};
    vector<int> res=productExceptSelf(nums);
    for(int i=0;i<res.size();i++){
        cout<<res[i];
    }
    return 0;
}