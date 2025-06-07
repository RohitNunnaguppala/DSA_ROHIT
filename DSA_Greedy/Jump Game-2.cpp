#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int maxi=0;
        int cnt=0;
        int x=0;
        for(int i=0;i<nums.size()-1;i++){
            maxi=max(maxi,i+nums[i]);
            if(i==x){
                cnt=cnt+1;
                x=maxi;
            }
           
        }
        return cnt;
    }

    int jump2(vector<int>& a) {
         int n=a.size();
    int jump=0;
    int l=0;
    int r=0;
    while(r<n-1){
        int farthest=0;
        for(int i=l;i<=r;i++){
            farthest=max(i+a[i],farthest);
        }
        l=r+1;
        r=farthest;
        jump=jump+1;
        
    }
    return jump;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,3,1,1,4};
    int result = sol.jump(nums);
    cout << "Minimum jumps: " << result << endl; // Output: 2
    return 0;
}
