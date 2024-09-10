#include<bits/stdc++.h>
using namespace std;

void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;i<n-j+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print4(n);
    return 0;
}