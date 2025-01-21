#include<bits/stdc++.h>
using namespace std;


vector<int> reversek(vector<int> nums,int k){
    int n=nums.size();
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        ans[(i+k)%n]=nums[i];
    }
    return ans;
}

int main(){
    vector<int> nums={1,2,3,4,5,6,7,8,9};
    int k=3;
    vector<int> res=reversek(nums,k);

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}

#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr,int l,int r){
    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
}
void rotate(vector<int>& nums,int k) {
        int n=nums.size();
        k=k%n;
        if(k==0){
            return;
        }
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
}
int main() {
    vector<int> nums={1, 2, 3, 4, 5};
    int k=2;
    rotate(nums,k);
     for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}