#include<bits/stdc++.h>
using namespace std;

void movezeros(vector<int>& nums,int k){
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==k){
            cout<<i;
        }
    }
}

int main() {
    vector<int> nums={5,4,3,2,1};
    int k=5;
    movezeros(nums,k);
    return 0;
}
