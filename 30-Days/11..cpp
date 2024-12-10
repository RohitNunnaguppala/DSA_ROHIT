#include<bits/stdc++.h>
using namespace std;

int missingnum(vector<int> arr) {
    int n=arr.size();
    int maxcnt=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
        }
        else{
            cnt=0;
        }
        maxcnt=max(maxcnt,cnt);
    }
    return maxcnt;
}

int main() {
    vector<int> arr1 = {1,1,1,1,1,1,1,0,0,0,1,1,0,1,1,1,0,1};
    int result=missingnum(arr1);
    cout<<result;

    return 0;
}
