#include<bits/stdc++.h>
using namespace std;

int maxelement(vector<int> arr){
    int n=arr.size();
    if(n<2) return -1;
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<n;i++){
        if(max1<arr[i]){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2&&arr[i]!=max1){
            max2=arr[i];
        }
    }
    return (max2==INT_MIN)?-1:max2;
}
int main(){
    vector<int> arr={1,3,2,4,5,6};
    int result=maxelement(arr);
    cout<<result;
    return 0;
}