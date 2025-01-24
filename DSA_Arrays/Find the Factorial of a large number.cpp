#include<bits/stdc++.h>
using namespace std;

void multiply(int n,vector<int>& res){
    int carry=0;
    for(int i=0;i<res.size();i++){
        int prod=res[i]*n+carry;
        res[i]=prod%10;
        carry=prod/10;
    }
    
    while(carry){
        res.push_back(carry%10);
        carry/=10;
    }
}
void fact(int n){
    vector<int> res;
    res.push_back(1);
    for(int i=2;i<=n;i++){
        multiply(i,res);
    }
    for(int i=res.size()-1;i>=0;i--){
        cout<<res[i];
    }
    cout<<endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial of " << n << " is: ";
    fact(n);

    return 0;
}