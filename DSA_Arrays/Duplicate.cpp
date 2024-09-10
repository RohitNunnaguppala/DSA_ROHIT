#include<bits/stdc++.h>
using namespace std;

int duplicate(vector<int> &a){
    int n=a.size();

    unordered_map<int,int> freq;
    for(int n:a){
        freq[n]++;
    }
    for(auto &n:freq){
        if(n.second>1){
            return n.first;
        }
    }
    return -1;

}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans=duplicate(a);
    cout<<ans<<endl;
}