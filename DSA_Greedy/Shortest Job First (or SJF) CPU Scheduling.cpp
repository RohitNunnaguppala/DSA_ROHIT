#include<bits/stdc++.h>
using namespace std;

float stf(vector<int> &a){
    int n = a.size();
    int t = 0, c = 0;
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        c+=t;
        t += a[i];
    }
    return c/n;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    cout << "Average waiting time: " << stf(a) << endl;
    return 0;
}