// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

void arrayrev(vector<int> nums){
    int n=nums.size();
    for(int i=n-1;i>-1;i--){
        cout<<nums[i]<<" ";
    }
}

void arrayrev1(vector<int> &nums){
    int n=nums.size();
    int l=0,r=n-1;
    while(l<r){
        int temp=nums[l];
        nums[l]=nums[r];
        nums[r]=temp;
        
        l++;
        r--;
    }
}
int main(){
    vector<int> nums={1,2,3,4,5,6};
    arrayrev1(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
