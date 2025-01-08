// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int search(vector<int> nums,int target){
    int n=nums.size();
    int l=0;
    int h=n-1;
    while(l<=h){
        int m=(l+h)/2;
        if(nums[m]==target){
            return m;
        }
        if(nums[l]<=nums[m]){
            if(nums[l]<=target&&target<=nums[m]){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        else{
            if(nums[m]<=target&&target<=nums[h]){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
    }
    return -1;
}
int main() {
   vector<int> nums={4,5,6,7,0,1,2};
   int k=0;
   int idx=search(nums,k);
   cout<<idx;

    return 0;
}