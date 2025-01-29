#include<bits/stdc++.h>
using namespace std;

string compress(string s){
    int n=s.size();
    if(n==0){
        return s;
    }
    int l=0,r=1;
    int cnt=1;
    string str;
    while(r<n){
        if(s[l]==s[r]){
            cnt++;
            r++;
        }
        else {
            str+=s[l]+to_string(cnt);
            l=r; 
            r=l+1;
            cnt=1;
        }
    }
    str+=s[l]+to_string(cnt);
    return str.size()<n?str:s;
}
int main(){
    string s="aabcccccaa";
    string res=compress(s);
    cout<<res<<" ";
}
