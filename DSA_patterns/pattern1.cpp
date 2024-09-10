/*Patterns
  1)for the pouter lopp,count the no.of lines
  2)for the inner loop,focus on the colums and connect them somehow to the rows
  3)print them '*' inside the innner for loop
  4) observe symmentry [optional]
*/

#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print1(n);
    return 0;
}