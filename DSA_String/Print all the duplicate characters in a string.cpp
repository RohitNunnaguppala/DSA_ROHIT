#include<bits/stdc++.h>
using namespace std;

void duplicate(string s){
    int n=s.size();
    sort(s.begin(),s.end());
    
    for(int i=0;i<n;i++){
        int cnt=1;
        while(i<n-1&&s[i]==s[i+1]){
            cnt++;
            i++;
        }
        if(cnt>1){
            cout<<s[i]<<" "<<", count = "<<cnt<<endl;
        }
    }
}

void optimizeduplicate(string s){
    unordered_map<char,int> str;
    
    for(int i=0;i<s.length();i++){
        str[s[i]]++;
    }
    for(auto it:str){
        if(it.second>1){
            cout<<it.first<<" "<<", count = "<<it.second<<endl;
        }
    }
}
int main(){
    string s="geeksforgeeks";
    duplicate(s);
    return 0;
}