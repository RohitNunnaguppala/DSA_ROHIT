#include <bits/stdc++.h>
using namespace std;

int getmindiff(vector<int> nums,int k){
    int n=nums.size();
    
    if(n==1){
        return 0;
    }
    
    sort(nums.begin(),nums.end());
    int diff=nums[n-1]-nums[0];
    int smallest=nums[0]+k;
    int largest=nums[n-1]-k;
    
    if(smallest>largest){
        swap(smallest,largest);
    }
    
    for(int i=1;i<n-1;i++){
        int addk=nums[i]+k;
        int subk=nums[i]-k;
        
        if(subk<0){
            continue;
        }
        
        smallest=min(smallest,subk);
        largest=max(largest,addk);
    }
    
    return min(diff,largest-smallest);
}
int main(){
    int k=3;
    vector<int> nums={3,9,12,16,20};
    cout<<"minimum difference "<<getmindiff(nums,k)<<endl; 
}