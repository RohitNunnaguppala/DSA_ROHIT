#include<bits/stdc++.h>
using namespace std;

int missingnum(vector<int> arr) {
    int n=arr.size();
    int sum=(n*(n+1))/2;
    int missum=0;
    for(int i=0;i<n;i++){
        missum+=arr[i];
    }
    int result=sum-missum;
    return result;
}

int main() {
    vector<int> arr1 = {9,6,4,2,3,5,7,0,1};
    int result=missingnum(arr1);
    cout<<result;

    return 0;
}
