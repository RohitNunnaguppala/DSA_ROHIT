#include<bits/stdc++.h>
using namespace std;

int buyandsell(vector<int> &prices){
    int maxpro=0;
        int mini=prices[0];
        for(int i=0;i<prices.size();i++){
            int curpro=prices[i]-mini;
            maxpro=max(maxpro,curpro);
            mini=min(prices[i],mini);
        }
        return maxpro;
}

int main() {
    vector<int> a = {7, 1, 5, 3, 6, 4};
    int sol=buyandsell(a);
    cout<<sol<<endl;

    
    return 0;
}