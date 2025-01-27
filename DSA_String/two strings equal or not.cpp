#include<bits/stdc++.h>
using namespace std;

bool areRotations(string &s1, string &s2) {
    int n=s1.size();
    int m=s2.size();
    
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    
    if(n!=m){
        return false;
    }
    
    int l=0;
    while(l<n){
        if(s1[l]!=s2[l]){
            return false;
        }
        l++;
    }
    
    return true;
}
int main(){
    string s1 = "abcd";
    string s2 = "acbd";

    cout << (areRotations(s1, s2) ? "true" : "false");
    return 0;
}