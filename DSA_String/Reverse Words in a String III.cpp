class Solution {
    private:
    void reverseword(string &s, int left, int right) {
        while (left < right) {
            swap(s[left++], s[right--]);
        }
    }
    public:
        string reverseWords(string str) {
            int s=0;
            int n=str.size();
    
            for(int e=0;e<=n;e++){
                if(e==n||str[e]==' '){
                    reverseword(str,s,e-1);
                    s=e+1;
                }
            }
            return str;
        }
    };