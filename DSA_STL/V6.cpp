#include <iostream>
#include <set>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N, M;
        cin >> N >> M;
        
        set<long long> candySet;
        long long candy;
        
        // Insert the first N students' candies into the set
        for (int i = 0; i < N; i++) {
            cin >> candy;
            candySet.insert(candy);
        }
        
        // Process the next M students
        for (int i = 0; i < M; i++) {
            cin >> candy;
            if (candySet.find(candy) != candySet.end()) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
                candySet.insert(candy);
            }
        }
    }
    
    return 0;
}
