#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b);
double sum(double a,double b);
float sum(float a,float b,float c);

int main(){
    cout<<sum(4,5)<<endl;
    cout<<sum(4.4,5.5)<<endl;
    cout<<sum(4.4,5.5,2.2)<<endl;
    return 0;
}

int sum(int a,int b){
    return a+b;
}
double sum(double a, double b){
    return a+b;
}
float sum(float a,float b,float c){
    return a+b+c;
}
