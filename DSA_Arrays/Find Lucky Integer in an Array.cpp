class Solution {
    public:

        int findLucky(vector<int>& arr) {
            unordered_map<int, int> fre;
            for (int n:arr) {
                fre[n]++;
            }
    
            int res=-1;
    
            for(auto& [n, cnt]:fre) {
                if(n==cnt) {
                    res=max(res,n); 
                }
            }
    
            return res;
        }
    };