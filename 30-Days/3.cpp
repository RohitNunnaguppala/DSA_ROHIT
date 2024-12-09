#include<bits/stdc++.h>
using namespace std;

bool sorted(vector<int> arr){
    int n=arr.size();
    
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i=0;i<n;i++) {
            if(nums[i]>nums[(i+1)%n]){
                count++;
            }
            if(count>1){
                return false;
            }
        }
        return true;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    bool result=sorted(arr);
    if(result==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}