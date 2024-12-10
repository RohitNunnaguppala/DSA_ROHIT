#include<bits/stdc++.h>
using namespace std;

vector<int> funUnion(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0;
    vector<int> temp;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            if (temp.empty() || temp.back() != arr1[i]) {
                temp.push_back(arr1[i]);
            }
            i++;
        } 
        else if (arr2[j] < arr1[i]) {
            if (temp.empty() || temp.back() != arr2[j]) {
                temp.push_back(arr2[j]);
            }
            j++;
        } 
        else {
            if (temp.empty() || temp.back() != arr1[i]) {
                temp.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    while (i < n) {
        if (temp.empty() || temp.back() != arr1[i]) {
            temp.push_back(arr1[i]);
        }
        i++;
    }

    while (j < m) {
        if (temp.empty() || temp.back() != arr2[j]) {
            temp.push_back(arr2[j]);
        }
        j++;
    }

    return temp;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr2 = {2, 3, 4, 4, 5, 11, 12};
    vector<int> Union = funUnion(arr1, arr2);
    
    cout << "Union of arr1 and arr2 is:\n";
    for (int val : Union) {
        cout << val << " ";
    }

    return 0;
}
