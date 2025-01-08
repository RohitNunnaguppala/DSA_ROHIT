class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<=n-1;i++){
        if(target==nums[i]){
            return i;
        }
    }
    return -1;
    }
};

//T.C=(N)