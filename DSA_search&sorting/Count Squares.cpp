#include <bits/stdc++.h>

using namespace std;

int countSquares(int n) {
    return (int)sqrt(n - 1); 
}
int countSquares(int n) {
    int count = 0;
    int i = 1;
    while (i * i < n) {
        count++;
        i++;
    }
    
    return count;
}
int main() {
    cout << countSquares(9) << endl;
    return 0;
}
