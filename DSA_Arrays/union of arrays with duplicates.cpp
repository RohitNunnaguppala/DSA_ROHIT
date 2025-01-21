#include<bits/stdc++.h>
using namespace std;

int unionarr(vector<int> &num1,vector<int> &num2){
    int n=num1.size();
    int m=num2.size();
    
    for(int i=0;i<m;i++){
        num1.push_back(num2[i]);
    }
    sort(num1.begin(),num1.end());
    
    vector<int> temp; 
    temp.push_back(num1[0]); 

    for (int i = 1; i < num1.size(); i++) {
        if (num1[i] != num1[i - 1]) {
            temp.push_back(num1[i]);
        }
    }

    num1 = temp;

    return num1.size();
}
int doUnion(vector<int> &a, vector<int> &b) {
    unordered_set<int> unionSet;
    for (int num : a) {
        unionSet.insert(num);
    }
    for (int num : b) {
        unionSet.insert(num);
    }
    return unionSet.size();
}
int main() {
    vector<int> num1={85, 25, 1, 32, 54, 6};
    vector<int> num2={85, 2};
    // unionarr(num1,num2);
    int r=unionarr(num1,num2);
    cout<<r<<" ";

    return 0;
}