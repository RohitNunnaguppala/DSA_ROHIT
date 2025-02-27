class Solution {
    public:
        vector<int> sortArrayByParityII(vector<int>& nums) {
            int n=nums.size();
    
            int l=0;
            int r=n-1;
            vector<int> odd;
            vector<int> res;
            for(int i=0;i<n;i++){
                if(nums[i]%2==0){
                    res.push_back(nums[i]);
                }
                else{
                    odd.push_back(nums[i]);
                }
            }
    
            for(int i=0;i<odd.size();i++){
                res.push_back(odd[i]);
            }
            while(l<r){
              for(int i=0;i<n;i++){
                if(i%2==0){
                    nums[i]=res[l];
                    l++;
               }
               else{
                nums[i]=res[r];
                r--;
               }
              }
            }
    
            return nums;
        }
    };