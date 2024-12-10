#include<bits/stdc++.h>
using namespace std;

vector<int> movezeros(vector<int>& nums){
    int n=nums.size();
    int j=-1;
    for(int i=0;i<=n-1;i++){
        if(nums[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
        return nums;
    }
    for(int i=j+1;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    return nums;
}

int main() {
    vector<int> nums; 
    int n;

    cout << "Enter size of array: ";
    cin >> n;
    
    cout << "Enter elements of array: ";
    nums.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    movezeros(nums);
    cout << "After moving zeros: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
