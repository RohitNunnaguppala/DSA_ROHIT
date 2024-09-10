#include<bits/stdc++.h>
using namespace std;

// vector<int> twosum(vector<int> &a,int target){
//      int n=a.size();
//      for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//           if(a[i]+a[j]==target)
//            return {i,j};
//         }
//      }
//      return {};
// }


vector<int> twosum(vector<int> &a,int target){
       int n=a.size();
       int left=0;
       int right=n-1;
       
       while(left<right){
          int add=a[left]+a[right];
          if(add==target) 
              return {left,right};
          if(add<target)
              left++;
          if(add>target)
               right--;
       }
       return {};
}

int main(){
    vector<int> a={2,6,5,8,11};
    int target=14;
    vector<int> ans=twosum(a,target);
    cout<< "[" <<ans[0] <<","<<ans[1]<<"]"<<endl;
    return 0;
}