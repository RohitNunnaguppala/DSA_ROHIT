#include<bits/stdc++.h>
using namespace std;

int missingnum(vector<int> nums) {
    int n=nums.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++) {
           mpp[nums[i]]++;
        }
        for(auto it:mpp){
           if(it.second==1)
            return it.first;
        }
        return -1;
}

int main() {
    vector<int> arr1 = {4,1,2,2,1};
    int result=missingnum(arr1);
    cout<<result;

    return 0;
}
