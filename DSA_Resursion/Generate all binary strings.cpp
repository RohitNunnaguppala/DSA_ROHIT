#include <iostream>
#include <vector>
using namespace std;

void generateBinaryStrings(int n, string current, vector<string> &result) {
    
    if(current.length()==n){
      result.push_back(current);
      return;
    }
    
    generateBinaryStrings(n,current+'0',result);
    generateBinaryStrings(n,current+'1',result);
}

int main() {
    int n;
    cout << "Enter length of binary strings (n): ";
    cin >> n;

    vector<string> result;
    generateBinaryStrings(n, "", result);

    cout << "All binary strings of length " << n << ":\n";
    for (const string &s : result) {
        cout << s << endl;
    }

    return 0;
}
