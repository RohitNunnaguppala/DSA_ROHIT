#include <bits/stdc++.h>

using namespace std;


    vector<int> valueEqualToIndex(vector<int>& arr) {
        vector<int> result;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == i + 1) {  
                result.push_back(i + 1);
            }
        }
        return result;
    }

int main() {
    vector<int> arr1 = {15, 2, 45, 4, 7};
    vector<int> result1=valueEqualToIndex(arr1);
    
    cout << "Output: ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
