#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int, int> &m) {
    cout << m.size() << endl;
    for(auto &pr: m) {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main() {
    unordered_map<int, string> um1;
    um1[1] = "abc";
    um1[5] = "cdc";
    um1[3] = "acd";
    um1[6] = "a";
    um1[5] = "cde";

    auto it1 = um1.find(7);
    if(it1 == um1.end()) {
        cout << "No value found for key 7" << endl;
    } else {
        cout << (*it1).first << " " << (*it1).second << endl;
    }

    um1.insert({4, "afg"});

    for(auto it = um1.begin(); it != um1.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    unordered_map<string, string> um2;
    um2["abcd"] = "abcd";

    auto it2 = um2.find("abcd");
    if(it2 != um2.end()) {
        um2.erase(it2);
    }

    unordered_map<int, int> um3;
    um3[6];
    print(um3);

    multimap<int, string> mm;
    mm.insert({1, "abc"});
    mm.insert({1, "def"});
    mm.insert({2, "ghi"});
    mm.insert({2, "jkl"});

    for(auto it = mm.begin(); it != mm.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
