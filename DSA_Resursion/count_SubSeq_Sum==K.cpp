#include<bits/stdc++.h>
using namespace std;


int fun(int idx,vector<int> a,int n,int s,int sum){
  if(idx==n){
    if(s==sum){
     return 1;
    }
    return 0;
  }
  
  int l=fun(idx+1,a,n,s,sum);
  

  s+=a[idx];
  int r=fun(idx+1,a,n,s,sum);
  s-=a[idx];
  
  return l+r;
}

int main(){
  vector<int> a={1,2,1};
  int n=3;
  int sum=2;
  cout<<fun(0,a,n,0,sum)<<endl;
  
  return 0;
}