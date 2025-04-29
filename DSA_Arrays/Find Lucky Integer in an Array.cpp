class Solution {
    public:
        int findLucky(vector<int>& arr) {
            unordered_map<int, int> freq;
            for (int n:arr) {
                freq[n]++;
            }
    
            int res=-1;
    
            for(auto& [n, cnt]:freq) {
                if(n==cnt) {
                    res=max(res,n); 
                }
            }
    
            return res;
        }
    };