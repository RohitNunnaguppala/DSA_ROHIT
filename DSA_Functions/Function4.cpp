#include<bits/stdc++.h>
using namespace std;

bool isPrimeNumber(int num){
    for(int i=2;i<num;i++){
         if(num%i==0){
            return false;
         }
    }
    return true;
}

int main(){
    int count=0;
    for(int i=1;i<=10;i++){
        bool isPrime=isPrimeNumber(i);
        if(isPrime){
            cout<< i << " is Prime number\n";
            count++;
        }
    }
    cout<<"The count: "<<count<<endl;
    return 0;
}