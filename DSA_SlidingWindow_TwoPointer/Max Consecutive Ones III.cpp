#include<bits/stdc++.h>
using namespace std;

int maxconsecutiveones(vector<int> nums,int k){
    int n=nums.size();
    int l=0;
    int r=0;
    int zeros=0;
    int maxlen=0;
    while(r<n){
        if(nums[r]==0){
            zeros++;
        }
        if(zeros>k){
            if(nums[l]==0){
                zeros--;
            }
            l++;
        }
        if(zeros<=k){
            int len=r-l+1;
            maxlen=max(maxlen,len);
        }
        r++;
    }
    return maxlen;
}

int main(){
    vector<int> nums={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    int len=maxconsecutiveones(nums,k);
    cout<<len;
    return 0;
}