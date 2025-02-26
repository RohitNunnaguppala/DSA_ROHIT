class Solution {
    public:
        bool detectCapitalUse(string s) {
           int n=s.size();
           int capcnt=0;
    
           for(auto c:s){
            if(isupper(c)){
                capcnt++;
            }
           }
    
           if(capcnt==n){
            return true;
           }
           else if(capcnt==0){
            return true;
           }
           else if(capcnt==1 &&isupper(s[0])){
            return true;
           }
           return false;
        }
    };