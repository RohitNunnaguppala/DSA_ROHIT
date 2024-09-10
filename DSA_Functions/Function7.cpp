#include<bits/stdc++.h>
using namespace std;

int recursive_Sum(int m,int n){
    if(m==n)
       return m;
    return m+recursive_Sum(m+1,n); 
}

int main(){
    int m=2,n=4;
    cout<<"Sum: "<<recursive_Sum(m,n);
    /* int sum=0;
    for(int i=m;i<=n;i++){
        sum+=i;
    }
    cout<<"sum="<<sum;
    return 0; */


}