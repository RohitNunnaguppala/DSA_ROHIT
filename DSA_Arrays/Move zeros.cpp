class Solution {
public:
    vector<int> moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int> nonzero,zero,res;
        for(int n:nums){
            if(n>0 || n<0){
                nonzero.push_back(n);
            }
            else{
                zero.push_back(n);
            }
        }
        for(int i=0;i<nonzero.size();i++){
            res.push_back(nonzero[i]);
        }
        for(int i=0;i<zero.size();i++){
            res.push_back(zero[i]);
        }
        for(int i=0;i<n;i++){
            nums[i]=res[i];
        }
        return nums;
    }

     void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int nonindex=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]!=0) {
                nums[nonindex++]=nums[i];
            }
        }
        
        for(int i=nonindex;i<n;i++){
            nums[i]=0;
        }
    }
};