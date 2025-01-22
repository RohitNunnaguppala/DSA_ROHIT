#include<bits/stdc++.h>
using namespace std;

int minjump(vector<int> &a){
    int maxidx=0;
    for(int i=0;i<a.size();i++){
        if(i>maxidx) return false;
        maxidx=max(maxidx,i+a[i]);
    }
    return true;
}

int main() {
    vector<int> a = {0, 10, 20};
    bool sol=minjump(a);
    cout<<sol<<endl;

    
    return 0;
}