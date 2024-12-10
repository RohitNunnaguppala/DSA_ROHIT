#include <bits/stdc++.h>
using namespace std;

pair<int, vector<int>> getLongestSubarray(vector<int>& a,int k) {
    int n = a.size(); 
    int left = 0, right = 0; 
    int sum = a[0];
    int maxLen = 0;
    int startIndex = -1, endIndex = -1;

    while (right < n) {
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        if (sum == k) {
            if (right - left + 1 > maxLen) {
                maxLen = right - left + 1;
                startIndex = left;
                endIndex = right;
            }
        }

        right++;
        if (right < n) sum += a[right];
    }

    vector<int> subarray;
    if (startIndex != -1) {
        for (int i = startIndex; i <= endIndex; i++) {
            subarray.push_back(a[i]);
        }
    }

    return {maxLen, subarray};
}

int main() {
    vector<int> a = {2, 3, 5, 1, 9};
    int k = 10;
    auto result = getLongestSubarray(a, k);

    int len = result.first;
    vector<int> subarray = result.second;

    cout << "The length of the longest subarray is: " << len << "\n";
    cout << "The elements of the subarray are: ";
    for (int num : subarray) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}
