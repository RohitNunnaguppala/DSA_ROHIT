// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

bool subarrayexists(vector<int> a){
    int n=a.size();
    
    unordered_map<int,bool> mp;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==0||mp[sum]){
            return true;
        }
        mp[sum]=true;
        }
    return false;
}

int main() {
    vector<int> a = {4, 2, -3, 1, 6};

    bool ans=subarrayexists(a);
    cout<<ans<<" ";
    return 0;
}