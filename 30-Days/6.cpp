#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k, bool right) {
    int n = nums.size();
    k = k % n; 
    if (right) {
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    } else {
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        reverse(nums.begin(), nums.end());
    }
}

int main() {
    vector<int> nums; 
    int n, k;
    bool direction;

    cout << "Enter size of array: ";
    cin >> n;
    
    cout << "Enter elements of array: ";
    nums.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter value of k (positions to rotate): ";
    cin >> k;
    cout << "Enter direction (1 for right, 0 for left): ";
    cin >> direction;

    rotate(nums, k, direction);
    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
