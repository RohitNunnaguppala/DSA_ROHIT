#include<bits/stdc++.h>
using namespace std;


void fun(int idx,vector<int> &ds,vector<int> a,int n,int s,int sum){
  if(idx==n){
    if(s==sum){
      for(auto it:ds){
        cout<<it<<" ";
      }
      cout<<endl;
    }
    return;
  }
  
  fun(idx+1,ds,a,n,s,sum);
  
  ds.push_back(a[idx]);
  s+=a[idx];
  fun(idx+1,ds,a,n,s,sum);
  s-=a[idx];
  ds.pop_back();
  
}

int main(){
  vector<int> a={1,2,1};
  int n=3;
  vector<int> ds;
  int sum=2;
  fun(0,ds,a,n,0,sum);
  
  return 0;
}