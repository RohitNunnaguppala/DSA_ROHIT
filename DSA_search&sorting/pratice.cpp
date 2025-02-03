#include<bits/stdc++.h>
using namespace std;

void ss(vector<int> &a){
    int n=a.size();
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        swap(a[min],a[i]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void bs(vector<int> &a){
    int n=a.size();
    for(int i=n-1;i>=0;--i){
        for(int j=0;j<=i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j+1],a[j]);
            }
        }
    }
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> a={14,69,47,25,36};
     ss(a);
     bs(a);
     return 0;
}