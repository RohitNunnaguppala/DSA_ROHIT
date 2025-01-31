class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;

        while(l<=r&&s[l]==' '){
            l++;
        }
        while(r>=0&&s[r]==' '){
            r--;
        }

        reverse(s.begin()+l,s.begin()+r+1);

        int i=l;
        string res="";
        while(i<=r){
            int j=i;
            while(j<=r&&s[j]!=' ') j++;
            reverse(s.begin()+i,s.begin()+j);
            if (!res.empty()) res += " "; 
            res += s.substr(i, j - i);
            i = j + 1;
            while (i <= r && s[i] == ' ') i++;
        }
        
        return res;
    }
};