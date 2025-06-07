#include <bits/stdc++.h>
using namespace std;

int findPlatform(vector<int> &a, vector<int> &b, int n) {
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    int cnt=0;
    int maxcnt=0;
    int i=0;
    int j=0;
    
    while(i<n){
      if(a[i]<=b[j]){
        cnt++;
        i++;
      }
      if(a[i]>=b[j]){
        cnt=cnt-1;
        j++;
      }
      maxcnt=max(maxcnt,cnt);
    }
    
    return maxcnt;
}

int main() {
    vector<int> a= {900, 940, 950, 1100, 1500, 1800};
    vector<int> b= {910, 1200, 1120, 1130, 1900, 2000};
    int n=a.size();
    cout << "Minimum Number of Platforms Required = "
         << findPlatform(a,b, n) << endl;

    return 0;
}
