#include <bits/stdc++.h>
using namespace std;

float getMedian(vector<int>& a, vector<int>& b) {
    int n=a.size();
    int i=0,j=0;
    int count;
    int m1=-1;
    int m2=-1;
    
    for(count=0;count<=n;count++){
        m2=m1;
        if(i<n&&j<n){
            if(a[i]>b[j]){
                m1=b[j++];
            }
            else{
                m1=a[i++];
            }
        }
        else if(i<n){
            m1=a[i++];
        }
        else{
            m1=b[j++];
        }
    }
    return (m1+m2)/2;
    
}

float getmedian(vector<int>& a, vector<int>& b){
    int n=a.size();
    int l=0,r=n-1;
    int m=(l+r)/2;
    
    int m1=a[m];
    int m2=b[m];
    
    return (m1+m2)/2;
}
int main() {
    vector<int> a = { 1, 12, 15, 26, 38 };
    vector<int> b = { 2, 13, 17, 30, 45 };

    cout << getmedian(a, b) << endl;
    return 0;
}
