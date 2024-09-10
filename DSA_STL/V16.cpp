#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++){
        int x;
        s.insert(x);
    }
//     int a[n];
//     vector<int> a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     sort(a.begin(),a.end());
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     int *ptr=lower_bound(a,a+n,25);
//     int *ptr=upper_bound(a,a+n,6);
//     auto it=upper_bound(a.begin(),a.end(),6);
//     if(it==a.end()){
//         cout<<"NOT FOUND";
//         return 0;
//     }
//    auto it=upper_bound(a)
auto it=lower_bound(s.begin(),s.end(),5);
    cout<<(*it)<<endl;
    return 0;
}
