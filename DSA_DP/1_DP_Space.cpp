#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int prev2=0;
    int prev1=1;

    for(int i=2;i<=n;i++){
        int cur=prev2+prev1;
        prev2=prev1;
        prev1=cur;
    }
    cout<<prev1;
    return 0; 
}