#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>& res){
    int n=res.size();
    int pre=1;
    int suf=1;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(pre==0) pre=1;
        if(suf==0) suf=1;
        pre*=res[i];
        suf*=res[n-i-1];
        ans=max(ans,max(pre,suf));
    }
    return ans;
}
int main() {
     vector<int> arr = {1, 2, -3, 0, -4, -5};
    cout << "The maximum product subarray is: "
         << maxProductSubArray(arr) << "\n";
    return 0;
}