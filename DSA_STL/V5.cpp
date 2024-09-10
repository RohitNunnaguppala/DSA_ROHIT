#include <iostream>
#include <set>
using namespace std;

int main() {
    int Q; // number of queries
    cin >> Q;

    set<int> s;

    for (int i = 0; i < Q; i++) {
        int type, x;
        cin >> type >> x;

        if (type == 1) {
            s.insert(x); // Add element x to the set
        } else if (type == 2) {
            s.erase(x); // Remove element x from the set
        } else if (type == 3) {
            if (s.find(x) != s.end()) {
                cout << "Yes" << endl; // x is present in the set
            } else {
                cout << "No" << endl; // x is not present in the set
            }
        }
    }

    return 0;
}
