class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();

        int minele=*min_element(nums.begin(),nums.end());
        int maxele=*max_element(nums.begin(),nums.end());

        int shift=-minele;
        int range=maxele-minele+1;
        vector<int> freq(range,0);

        for(int n:nums){
            freq[n+shift]++;
        }

        int cnt=0;

        for(int i=range-1;i>-1;i--){
            cnt+=freq[i];
            if(cnt>=k){
                return i-shift;
            }
        }
        return -1;
    }
};