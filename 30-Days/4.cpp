#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums){
    int n=nums.size();
    int i=0;
    for(int j=1;j<n;j++){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
        }
    }
    return i+1;
}

int main() {
    vector<int> nums={1,1,2,2,3,3,3,4};
    int len = removeDuplicates(nums);
    cout<<"Number of unique elements: "<<len<<endl;
    cout<<"Array after removing duplicates: ";
    for(int i=0;i<len;i++){
        cout<<nums[i]; 
    }
    cout<<endl;

    return 0;
}
