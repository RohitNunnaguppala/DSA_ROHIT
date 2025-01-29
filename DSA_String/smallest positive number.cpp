#include<bits/stdc++.h>
using namespace std;

int smallpos(vector<int> a){
    int n=a.size();
    int smallmiss=1;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]==smallmiss){
            smallmiss++;
        }
    }
    return smallmiss;
}
int main(){
    vector<int> a={-8,0,-1,-4,-3};
    int res=smallpos(a);
    cout<<res<<" ";
}
