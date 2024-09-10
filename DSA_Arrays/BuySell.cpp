#include<bits/stdc++.h>
using namespace std;

int buyandsell(vector<int> &a){
    if(a.size()==0) return 0;
    int n=a.size();

    vector<int> fut(n);
    fut[n-1]=a[n-1];
    for(int i=n-1;i>=0;--i){
        fut[i]=max(a[i],fut[i+1]);
    }

    int maxprofit=0;

     for(int i=0;i<n;i++){
        int profit=fut[i+1]-a[i];
        if(profit>maxprofit){
            maxprofit=profit;
        }
     }
     return maxprofit;
}

int main() {
    vector<int> a = {7, 1, 5, 3, 6, 4};
    int sol=buyandsell(a);
    cout<<sol<<endl;

    
    return 0;
}