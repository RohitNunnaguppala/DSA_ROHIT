#include<bits/stdc++.h>
using namespace std;

vector<int> mergearr(vector<int> nums1,vector<int> nums2){
    int n=nums1.size();
    int m=nums2.size();
    
    int l=0;
    int r=0;
    vector<int> result;
    while(l<n&&r<m){   
        if(nums1[l]<=nums2[r]){
            result.push_back(nums1[l]);
            l++;
        }
        else{
            result.push_back(nums2[r]);
            r++;
        }
        
    }
    while(l<n){
        result.push_back(nums1[l]);
        l++;
    }
    while(r<m){
        result.push_back(nums2[r]);
        r++;
    }
    return result;
}
int main() {
    vector<int> nums1={2,4,7,10};
    vector<int> nums2={2,3};
    
    vector<int> res=mergearr(nums1,nums2);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

    return 0;
}