class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp; 

        for (int i=0;i<n;i++) {
            int index=abs(nums[i])-1; 
            
            if(nums[index]<0){
                temp.push_back(index+1);
            }else{
                nums[index]=-nums[index];
            }
        }

        return temp;
    }
};