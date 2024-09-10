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
    int num;
    cout<<"Enter Number: ";
    cin>>num;

    /* bool isPrimeFlag=true;
    for(int i=2;i<num;i++){
         if(num%i==0){
            isPrimeFlag=false;
            break;
         }
    } */
    bool isPrimeFlag=isPrimeNumber(num);

    if(isPrimeFlag){
        cout<<"Prime number"<<endl;
    }
    else{
        cout<<"Not prime number"<<endl;
    }

    return 0;
}