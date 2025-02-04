#include <bits/stdc++.h>
using namespace std;

void findMissingAndRepeating(vector<int>& a){
    int n=a.size();
    unordered_map<int,int> freq;
    vector<int> nums;
     vector<int> res;
    for(int n:a){
        freq[n]++;
    }
    
    
    
    for(auto &n:freq){
        if(n.second>1){
            res.push_back(n.first);
        }
        nums.push_back(n.first);
    }
    
    int sum=0;
    int m=nums.size();
    for(int i=0;i<m;i++){
        sum+=nums[i];
    }
    sort(nums.begin(),nums.end());
    
    int miss=((nums[m-1])*(nums[m-1]+1)/2);
    int ele=miss-sum;
    
    res.push_back(ele);
    
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    
}


void findMissingAndRepeating(vector<int>& a) {
    int n = a.size();
    unordered_map<int, int> freq;
    vector<int> res;

    for (int num : a) {
        freq[num]++;
    }
    
    int repeating, missing;
    
    for (int i = 1; i <= n; i++) {
        if (freq[i] == 2) repeating = i;
        if (freq[i] == 0) missing = i;
    }
    
    cout << "Repeating: " << repeating << ", Missing: " << missing << endl;
}
int main() {
    int n;
    vector<int> arr={4, 3, 6, 2, 1, 1};

    findMissingAndRepeating(arr);
    return 0;
}
