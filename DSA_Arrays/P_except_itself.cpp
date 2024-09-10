#include<bits/stdc++.h>
using namespace std;

vector<int> P_except_itself(vector<int> &a){
    int n = a.size();
    vector<int> answer(n, 1);

    int leftProduct = 1;
    for (int i = 0; i < n; ++i) {
        answer[i] = leftProduct;
        leftProduct *= a[i];
    }

    int rightProduct = 1;
    for (int i = n - 1; i >= 0; --i) {
        answer[i] *= rightProduct;
        rightProduct *= a[i];
    }

    return answer;
}

int main(){
    vector<int> a={1,2,3,4};
    vector<int> result =  P_except_itself(a);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}