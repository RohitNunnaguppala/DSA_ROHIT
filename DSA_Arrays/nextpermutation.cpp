#include <bits/stdc++.h>
using namespace std;

void nextgreaterPermutation(int arr[]){
    next_permutation(arr,arr+3);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
}

vector<int> nextGreaterPermutation(vector<int> a){
    int n=a.size();
    
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            idx=i;
            break;
        }
    }
    
    if(idx==-1){
        reverse(a.begin(),a.end());
        return a;
    }
    
    for(int i=n-1;i>idx;i--){
        if(a[i]>a[idx]){
            swap(a[i],a[idx]);
            break;
        }
    }
    reverse(a.begin()+idx+1,a.end());
    return a;
}
int main(){
    vector<int> nums={1,2,3};
    vector<int> ans = nextGreaterPermutation(nums);

    cout << "The next permutation is: [";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]";
    return 0;
}