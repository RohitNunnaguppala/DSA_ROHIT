#include<bits/stdc++.h>
using namespace std;


vector<int> reversek(vector<int> nums,int k){
    int n=nums.size();
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int left=i;
        int right=
    }
    return ans;
}

int main(){
    vector<int> nums={1,2,3,4,5,6,7,8,9};
    int k=3;
    vector<int> res=reversek(nums,k);

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}