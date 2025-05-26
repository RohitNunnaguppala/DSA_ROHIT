//memorization 
#include <bits/stdc++.h>

using namespace std;

int solve(int idx, vector<int>& height, vector<int>& dp){
    if(idx==0) return 0;
    if(dp[idx]!=-1) return dp[idx];
    
    int fs=solve(idx-1,height,dp)+abs(height[idx]-height[idx-1]);
    int ss=INT_MAX;
    if(idx>1){
      ss=solve(idx-2,height,dp)+abs(height[idx]-height[idx-2]);
    }
    
    return dp[idx]=min(fs,ss);
}


int main() {

  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  vector<int> dp(n,-1);
  cout<<solve(n-1,height,dp);
}

//tabulation


#include <bits/stdc++.h>

using namespace std;

int solve(int idx, vector<int>& height, vector<int>& dp){
    dp[0]=0;
    
   for(int i=1;i<=idx;i++){
    
    int fs=dp[i-1]+abs(height[i]-height[i-1]);
    int ss=INT_MAX;
    if(idx>1){
      ss=dp[i-2]+abs(height[i]-height[i-2]);
    }
    dp[i]=min(fs,ss);
   }
    
    return dp[idx];
}


int main() {

  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  vector<int> dp(n,0);
  cout<<solve(n-1,height,dp);
}

// Space Optimized Tabulation


#include <bits/stdc++.h>

using namespace std;

int solve(int idx, vector<int>& height, vector<int>& dp){
   int prev=0;
   int prev1=0;
    
   for(int i=1;i<=idx;i++){
    
    int fs=prev+abs(height[i]-height[i-1]);
    int ss=INT_MAX;
    if(idx>1){
      ss=prev1+abs(height[i]-height[i-2]);
    }
    int curr=min(fs,ss);
    prev1=prev;
    prev=curr;
   }
    
    return prev;
}


int main() {

  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  vector<int> dp(n,0);
  cout<<solve(n-1,height,dp);
}

