//s="abcabbcccdddfffxyzzamn"


#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="abcabbcccdddfffxyzzamn";
    unordered_map<char,int> str;

   for(int i=0;i<s.size();i++){
    str[s[i]]++;
   }

   for (auto m : str) {
        cout << m.first << " : " << m.second << endl;
    }

    return 0;
}