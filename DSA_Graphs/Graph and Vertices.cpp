#include<bits/stdc++.h>
using namespace std;

long long count(int n){
    int totaledges=(n*(n-1))/2;
    return pow(2,totaledges);
}

int main(){
    int n;
    cin>>n;
    cout<<count(n)<<endl;
    return 0;
}