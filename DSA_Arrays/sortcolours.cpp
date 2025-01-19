// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;



vector<int> sortcolours1(vector<int> &nums){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    return nums;
}

vector<int> sortcolours2(vector<int> &nums){
    int n=nums.size();
    int c0=0;
    int c1=0;
    int c2=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0) c0++;
        if(nums[i]==1) c1++;
        if(nums[i]==2) c2++;
    }
    
    for(int i=0;i<c0;i++) nums[i]=0;
    for(int i=c0;i<c0+c1;i++) nums[i]=1;
    for(int i=c0+c1;i<n;i++) nums[i]=2;
    
    return nums;
}

vector<int> sortcolours3(vector<int> &nums){
    int n=nums.size();
    int l=0,m=0,h=n-1;
    while(m<=h){
        if(nums[m]==0){
            swap(nums[m],nums[l]);
            l++;
            m++;
        }
        else if(nums[m]==1){
            m++;
        }
        else{
            swap(nums[m],nums[h]);
            h--;
        }
    }
    return nums;
}
int main() {
   vector<int> nums={0,1,2,0,1,2};
   vector<int> res=sortcolours3(nums);
   for(int i=0;i<nums.size();i++){
       cout<<res[i]<<" ";
   }
    return 0;
}