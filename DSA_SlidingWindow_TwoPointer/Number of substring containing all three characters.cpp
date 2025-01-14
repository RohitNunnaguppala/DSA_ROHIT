class Solution {
public:
    int numberOfSubstrings(string s) {
        int lastseen[3]={-1,-1,-1};
        int substrcnt=0;

        for(int i=0;i<s.size();i++){
            lastseen[s[i]-'a']=i;
            int minlastseen=min(lastseen[0],min(lastseen[1],lastseen[2]))+1;
            substrcnt+=minlastseen;
       }
       return substrcnt;
    }
};