class Solution {
    public:
        string longestCommonPrefix(vector<string>& s) {
            if(s.empty()){
                return " ";
            }
    
            sort(s.begin(),s.end());
            string f=s.front();
            string l=s.back();
    
            int len=min(f.length(),l.length());
            int i;
            for(i=0;i<len;i++){
                if(f[i]!=l[i]){
                    break;
                }
            }
    
            return f.substr(0,i);
    
        }
    };