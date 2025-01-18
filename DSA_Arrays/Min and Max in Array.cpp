#include<bits/stdc++.h>
using namespace std;

void minmax(vector<int> &nums){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    
    int min=nums[0];
    int max=nums[n-1];
    
    cout<<min<<" ";
    cout<<max<<" ";
}

void min_max(vector<int> &nums){
    int n=nums.size();
    
    int min=INT_MAX;
    int max=INT_MIN;
    
    for(int i=0;i<n;i++){
        if(nums[i]<min) min=nums[i];
        if(nums[i]>max) max=nums[i];
    }
    
    cout<<min<<" ";
    cout<<max<<" ";
    
}
int main(){
    vector<int> nums={1, 345, 234, 21, 56789};
    min_max(nums);
}
