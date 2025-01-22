#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> twosumzero(vector<int> &a){
    int n=a.size();
    sort(a.begin(),a.end());
    vector<pair<int,int>> ans;
    int l=0;
    int r=n-1;
     while(l<r){
        int sum=a[l] + a[r];
        if (sum==0){
            ans.push_back({a[l],a[r]});
            int leftValue = a[l], rightValue = a[r];
            while(l<r&&a[l]==leftValue) l++;
            while(l<r&&a[r]==rightValue) r--;
        } else if (sum < 0) {
            l++; 
        } else {
            r--;
        }
    }
    return ans;
}

int main() {
    vector<int> a = {6, 1, 8, 0, 4, -9, -1, -10, -6, -5};
    vector<pair<int,int>> result1 = twosumzero(a);
    cout << "Pairs for arr1: ";
    for (auto pair : result1) {
        cout << "[" << pair.first << ", " << pair.second << "] ";
    }
    cout << endl;
    return 0;
}