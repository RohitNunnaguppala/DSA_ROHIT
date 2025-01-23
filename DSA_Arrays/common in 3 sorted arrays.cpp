// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

vector<int> mergethreesortedarr(vector<int> nums1,vector<int> nums2,vector<int> nums3){
    int n=nums1.size();
    int m=nums2.size();
    int l=nums3.size();
    
    int x=0,y=0,z=0;
    vector<int> res;
    while(x<n&&y<m&&z<l){
        if(nums1[x]==nums2[y]&&nums2[y]==nums3[z]){
            res.push_back(nums1[x]);
            x++;
            y++;
            z++;
        }
        else if(nums1[x]>nums2[y]){
            y++;
        }
        else if(nums2[y]>nums3[z]){
            z++;
        }
        else{
            x++;
        }
    }
    return res;
    
}

int main() {
    vector<int> arr1 = {1, 5, 10, 20, 40, 80};
    vector<int> arr2 = {6, 7, 20, 80, 100};
    vector<int> arr3 = {3, 4, 15, 20, 30, 70, 80, 120};
    
    vector<int> ans=mergethreesortedarr(arr1,arr2,arr3);
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}