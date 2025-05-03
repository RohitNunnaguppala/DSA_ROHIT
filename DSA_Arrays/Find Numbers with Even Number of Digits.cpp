class Solution {
    public:
        int findNumbers(vector<int>& nums) {
             int cnt=0;
            for(auto n:nums){
                if((n>=10&&n<100)||(n>=1000&&n<10000)||n==100000){
                    cnt++;
                }
            }
            return cnt;
        }
    };