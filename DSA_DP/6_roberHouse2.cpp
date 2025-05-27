
#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>& arr) {
    int prev=arr[0];
    int prev1=0;
    
    for(int i=1;i<n;i++){
      int pick=arr[i];
      if(i>1) pick+=prev1;
      
      int nonpick=0+prev;
      
      int curr=max(pick,nonpick);
      prev1=prev;
      prev=curr;
    }
    return prev;
}

long long int house(int n,vector<int> arr){
  vector<int> temp1,temp2;
  
  for(int i=0;i<n;i++){
    if(i!=0) temp1.push_back(arr[i]);
    if(i!=n-1) temp2.push_back(arr[i]);
  }
  
  return max(solve(n,temp1),solve(n,temp2));
}
int main() {
    vector<int> arr{1,5,1,2,6};
    int n = arr.size();
    
    cout << house(n, arr);

    return 0;
}

