// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

void ksmallest(vector<int> nums,int k){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    
    cout<<nums[k-1]<<" ";
}

int ksmall(vector<int> arr,int k){
    int n=arr.size();
    
    int maxele=*max_element(arr.begin(),arr.end());
    
    vector<int> freq(maxele+1,0);
    for(int num:arr){
        freq[num]++;
    }
    
    int cnt=0;
    for(int i=0;i<=maxele;i++){
        cnt+=freq[i];
        if(cnt>=k){
            return i;
        }
    }
    return -1;
}

int main() {
   vector<int> nums={2,3,1,20,15};
   int k=4;
   int res=ksmall(nums,k);
   cout<<res<<" ";
    return 0;
}