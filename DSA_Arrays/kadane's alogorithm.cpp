#include<bits/stdc++.h>
using namespace std;

int kadane(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
}
int main() {
    vector<int> nums={-2, -4};
    int res=kadane(nums);
    cout<<res<<" ";
    cout << endl;

    return 0;
}