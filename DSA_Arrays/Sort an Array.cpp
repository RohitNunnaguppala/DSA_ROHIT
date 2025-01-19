class Solution {
public:

    void merge(vector<int> &nums,int l,int m,int h){
        int left=l;
        int right=m+1;

        vector<int> temp;

        while(left<=m&&right<=h){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }

        while(left<=m){
        temp.push_back(nums[left]);
        left++;
        }

        while(right<=h){
        temp.push_back(nums[right]);
        right++;
        }

        for(int i=l;i<=h;i++) {
          nums[i]=temp[i-l];
        }
    }
    void sortArray(vector<int>& nums,int l, int h) {
        
        if(l>=h) return ;
        int m=(l+h)/2;
        sortArray(nums,l,m);
        sortArray(nums,m+1,h);
        merge(nums,l,m,h);
    }
     vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        sortArray(nums, 0, n - 1);   
        return nums;
    }
};