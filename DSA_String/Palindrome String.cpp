#include<bits/stdc++.h>
using namespace std;

bool pali(string s){
    int n=s.size();
    
    int l=0;
    int r=n-1;
    while(l<r){
        if(s[l]==s[r]){
            l++;
            r--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main() {
    string s="abc";
    int i=pali(s);
    cout<<i<<" ";
    return 0;
}