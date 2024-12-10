#include<bits/stdc++.h>
using namespace std;

void rotateleftbyone(vector<int> arr){
    int n=arr.size();
    for(int i=1;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[0];
}
void rotatearray(vector<int> arr,int k){
    int n=arr.size();
    k=k%n;
    for(int i=n-k;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-k;i++){
        cout<<arr[i]<<" ";
    }
}
void rotate(vector<int>& nums,int k) {
    int n=nums.size();
    k=k%n; 
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
}
int main(){
    vector<int> arr={-1,-100,3,99};
    int k=2;
    //rotateleftbyone(arr);
    rotatearray(arr,k);
    return 0;
}