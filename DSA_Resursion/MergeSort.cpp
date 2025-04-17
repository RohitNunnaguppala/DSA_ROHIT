#include<bits/stdc++.h>
using namespace std;

void ms(vector<int> &a,int low,int m,int high){
  vector<int> temp;
  int l=low;
  int r=m+1;
  while(l<=m&&r<=high){
    if(a[l]<=a[r]){
      temp.push_back(a[l]);
      l++;
    }
    else{
      temp.push_back(a[r]);
      r++;
    }
  }
  while(l<=m){
    temp.push_back(a[l]);
    l++;
  }
  while(r<=high){
    temp.push_back(a[r]);
    r++;
  }
  
  for(int i=low;i<=high;i++){
    a[i]=temp[i-l];
  }
  
}

void mergesort(vector<int> &a,int l,int h){
  if(l==h) return;
  int m=(l+h)/2;
  mergesort(a,l,m);
  mergesort(a,m+1,h);
  ms(a,l,m,h);
}

int main(){
  vector<int> a={2,4,6,7,4,2,1,3,8,0,9,6};
  int n=a.size();
  mergesort(a,0,n-1);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
    }
  
  return 0;
}