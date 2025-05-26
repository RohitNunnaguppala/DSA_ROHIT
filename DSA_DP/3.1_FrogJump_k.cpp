//memorization
#include <bits/stdc++.h>

using namespace std;

int solving(int idx, vector<int>& height, vector<int>& dp,int k){
    if(idx==0) return 0;
    
    if(dp[idx]!=-1) return dp[idx];
    
    int mins=INT_MAX;
   for(int j=1;j<=k;j++){
    if(idx-j>=0){
      int ss=solving(idx - j, height, dp, k) +abs(height[idx]-height[idx-j]);
      mins=min(mins,ss);
    }
   }
    
    return dp[idx]=mins;
}
int solve(int n, vector<int>& height, int k) {
    vector<int> dp(n, -1);
    return solving(n - 1, height, dp, k);
}

int main() {

  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  int k =2;
  
  cout<<solve(n,height,k)<<endl;
  return 0;
}

// Tabulation