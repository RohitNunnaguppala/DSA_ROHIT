#include<bits/stdc++.h>
using namespace std;

int minjump(vector<int> &a){
    int n=a.size();
    int jump=0;
    int l=0;
    int r=0;
    while(r<n-1){
        int farthest=0;
        for(int i=l;i<=r;i++){
            farthest=max(i+a[i],farthest);
        }
        l=r+1;
        r=farthest;
        jump=jump+1;
        
    }
    return jump;
}

int main() {
    vector<int> a = {1, 4, 3, 2, 6, 7};
    int sol=minjump(a);
    cout<<sol<<endl;

    
    return 0;
}