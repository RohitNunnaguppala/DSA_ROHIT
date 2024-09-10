#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    //int a[n];
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //cout<<"1 sort"<<" "<<endl;
    //sort(a, a+n);
    //cout<<"2"<<" ";
    //sort(a+2,a+n);
    //cout<<"3"<<" ";
    //sort(a,a+2);

    sort(a.begin() + 2, a.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}