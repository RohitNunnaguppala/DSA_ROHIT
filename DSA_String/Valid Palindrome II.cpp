#include<bits/stdc++.h>
using namespace std;

bool ispali(const string& s,int l,int r){
    while(l<r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
bool pali(string s){
    int n=s.size();
    int l=0;
    int r=n-1;
    while(l<r){
        if(s[l]!=s[r]){
            return ispali(s,l+1,r)||ispali(s,l,r+1);
        }
        l++;
        r--;
    }
    return true;
}
int main() {
    string s="abca";
    int i=pali(s);
    cout<<i<<" ";
    return 0;
}