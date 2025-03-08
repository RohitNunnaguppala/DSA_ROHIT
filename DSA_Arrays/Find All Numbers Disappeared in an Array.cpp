class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
            vector<int> res;
            int n=nums.size();
            for(int i=0;i<n;i++){
                int num=abs(nums[i]);
                if(nums[num-1]>0){
                    nums[num-1]=-nums[num-1];
                }
            }
            
            for(int i=0;i<n;i++){
                if(nums[i]>0){
                    res.push_back(i + 1);
                }
            }
            
            return res;
        }
    };