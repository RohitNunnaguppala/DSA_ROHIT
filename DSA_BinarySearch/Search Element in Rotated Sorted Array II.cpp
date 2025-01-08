#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> nums,int target){
    int n=nums.size();
    int l=0;
    int h=n-1;
    while(l<=h){
        int m=(l+h)/2;
        if(nums[m]==target){
            return true;
        }
        if(nums[l]==nums[m]&&nums[m]==nums[h]) {
            l++;
            h--;
        }
        else if(nums[l]<=nums[m]){
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
    return false;
}
int main() {
   vector<int> nums={1,0,1,1,1};
   int k=0;
   bool idx=search(nums,k);
   cout<<idx;

    return 0;
}