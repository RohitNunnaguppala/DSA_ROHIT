#include<bits/stdc++.h>
using namespace std;

vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        int ans1 = 0;
        int ans2 = 0;

        for (const auto& num : nums1) {
            if (set2.find(num) != set2.end()) {
                ++ans1;
            }
        }

        for (const auto& num : nums2) {
            if (set1.find(num) != set1.end()) {
                ++ans2;
            }
        }

        return {ans1, ans2};
}
int main() {
    vector<int> nums1 = {4, 3, 2, 3, 1};
    vector<int> nums2 = {2, 2, 5, 2, 3, 6};

    vector<int> result=findIntersectionValues(nums1, nums2);
    cout << "[" << result[0] << ", " << result[1] << "]\n";

    return 0;
}
