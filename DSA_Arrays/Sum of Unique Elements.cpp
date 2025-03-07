class Solution {
    public:
        int sumOfUnique(vector<int>& nums) {
            unordered_map<int,int> freq;
            for(auto n:nums){
                freq[n]++;
            }
    
            int sum=0;
            for(auto& n:freq){
                if(n.second<2){
                    sum=sum+n.first;
                }
            }
            return sum;
        }
    };