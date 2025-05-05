#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
      if(a[i]%2!=0){
        ans.push_back(0);
      }else{
        ans.push_back(1);
      }
    }
    int cnt=0;
    for(int i=1;i<n;i++){
      if(ans[i-1]<ans[i]){
        cnt++;
      }
    }
    cout<<cnt<<"\n";
}



int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
