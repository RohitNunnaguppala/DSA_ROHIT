#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:
        vector<int> shuffle(vector<int>& nums, int n) {
        int l=0,r=n;  
        vector<int> res;
    
        while(l<n){
            res.push_back(nums[l]);
            res.push_back(nums[r]);
            l++;
            r++;
        }
    
        return res;
        }
    };

int main(){
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    int n = 5;
    vector<int> res = s.shuffle(nums,n);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
    }