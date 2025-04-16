#include<bits/stdc++.h>
using namespace std;


void fun(int idx,vector<int> &ds,vector<int> a,int n){
  if(idx==n){
    for(auto it:ds){
      cout<<it<<" ";
    }
    if(ds.size()==0){
      cout<<"{}";
    }
    cout<<endl;
    return;
  }
  
  fun(idx+1,ds,a,n);
  
  ds.push_back(a[idx]);
  fun(idx+1,ds,a,n);
  ds.pop_back();
}

int main(){
  vector<int> a={3,1,2};
  int n=3;
  vector<int> ds;
  fun(0,ds,a,n);
  
  return 0;
}