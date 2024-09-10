#include <iostream>
#include <vector>
#include <limits.h> // For INT_MIN
using namespace std;

void great(vector<int> &a) {
    int n = a.size();
    vector<int> temp(n);
    int currentMax = INT_MIN; // Renamed to avoid shadowing std::max
    temp[n - 1] = -1; // Last element is -1 as per original logic

    // Print the last element of temp
    cout << temp[n - 1] << endl;

    // Iterate from the second last element to the first
    for (int i = n - 2; i >= 0; --i) {
        if (a[i] > currentMax) {
            currentMax = a[i];
            temp[i] = -1; // If current element is greater than max, set to -1
        } else {
            temp[i] = currentMax; // Otherwise, set to currentMax
        }
    }

    // Output the temp vector
    cout << "Resulting Array: ";
    for (int i = 0; i < temp.size(); i++) {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> a = {17, 18, 5, 4, 6, 1};
    great(a);
    return 0;
}