#include<bits/stdc++.h>
using namespace std;

int maxelement(vector<int> arr){
    int n=arr.size();
    int maxi=arr[0];
    for(int i=1;i<=n;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
        }
    }
     return maxi;
}
int main(){
    vector<int> arr={255,528,2455,2446,87491};
    int result=maxelement(arr);
    cout<<result;
    return 0;
}