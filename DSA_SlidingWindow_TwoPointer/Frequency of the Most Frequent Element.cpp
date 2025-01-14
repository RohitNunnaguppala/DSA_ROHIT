class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l=0;
        int r=0; 
        int result=0; 
        long long cursum=0; 
        int n = nums.size();
        for(r=0;r<n;r++){
            cursum+=nums[r];
        while((long long)nums[r]*(r-l+1)-cursum>k){
            cursum-=nums[l];
            l++;
        }
        result=max(result,r-l+1);
        }
        return result;
    }

};