#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:
        char findTheDifference(string s, string t) {
            unordered_map<char,int> cnt;
        
        for(char ch:s){
            cnt[ch]++;
        }
        
        for(char ch:t){
            if(cnt[ch]>0){
                cnt[ch]--;
            }else{
                return ch;  
            }
        }
        
        return '\0';
        }
};

int main(){
    Solution obj;
    string s = "abcd";
    string t = "abcde";
    cout<<obj.findTheDifference(s,t);
    return 0;
}

