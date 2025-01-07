class Solution {
public:
        int first(vector<int>& nums,int target){
            int n=nums.size();
            int low=0;
            int high=n-1;
            int firstn=-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]==target){
                    firstn=mid;
                    high=mid-1;
                }
                else if(nums[mid]<target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            return firstn;
        }
        int last(vector<int>& nums,int target){
            int n=nums.size();
            int low=0;
            int high=n-1;
            int lastn=-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]==target){
                    lastn=mid;
                    low=mid+1;
                }
                else if(nums[mid]<target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            return lastn;
        }
        vector<int> searchRange(vector<int>& nums, int target) {
        int firstIndex = first(nums, target);
        if (firstIndex == -1) return {-1, -1}; 
        int lastIndex = last(nums, target);
        return {firstIndex, lastIndex};
        }
};