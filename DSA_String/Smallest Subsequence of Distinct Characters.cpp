#include<bits/stdc++.h>
using namespace std;

string smallestSubsequence(string s) {
        string ans;
    vector<int> count(128);
    vector<bool> used(128);

    for (const char c : s)
      ++count[c];

    for (const char c : s) {
      --count[c];
      if (used[c])
        continue;
      while (!ans.empty() && ans.back() > c && count[ans.back()] > 0) {
        used[ans.back()] = false;
        ans.pop_back();
      }
      used[c] = true;
      ans.push_back(c);
    }

    return ans;
}
int main(){
    string s="cbacdcbc";
    string str=smallestSubsequence(s);
    cout<<str<<" ";
    return 0;
}