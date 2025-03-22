class Solution {
    public:
        long long maximumSubarraySum(vector<int>& nums, int k) {
            int n=nums.size();
            if(k>n){
                return -1;
            }
    
            unordered_set<int> st;
            long long win_sum=0;
            long long max_sum=0;
            int l=0;
    
            for(int r=0;r<n;r++){
                while(st.count(nums[r])){
                    st.erase(nums[l]);
                    win_sum-=nums[l];
                    l++;
                }
    
                st.insert(nums[r]);
                win_sum+=nums[r];
    
                if(r-l+1==k){
                    max_sum=max(max_sum,win_sum);
                    st.erase(nums[l]);
                    win_sum-=nums[l];
                    l++;
                }
            }
    
            return max_sum;
        }
    };