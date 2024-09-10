#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s) {
    for(string value : s) {
        cout << value << endl;
    }
}

void print(multiset<string> &s) {
    for(string value : s) {
        cout << value << endl;
    }
}

void print(unordered_map<string, int> &m) {
    for(auto &pr : m) {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main() {
    set<string> s1;
    s1.insert("abc");
    s1.insert("zsdf");
    s1.insert("bcd");

    auto it1 = s1.find("abcd");
    if(it1 != s1.end()) {
        cout << (*it1);
    }

    s1.erase("bcd");
    print(s1);

    multiset<string> s2;
    s2.insert("abc");
    s2.insert("zsdf");
    s2.insert("bcd");
    s2.insert("abc");

    auto it2 = s2.find("abc");
    if(it2 != s2.end()) {
        s2.erase(it2);
    }

    s2.erase("abc");
    print(s2);

    unordered_map<string, int> um;
    um["abc"] = 1;
    um["zsdf"] = 2;
    um["bcd"] = 3;

    auto it3 = um.find("abc");
    if(it3 != um.end()) {
        cout << it3->first << " " << it3->second << endl;
    }

    um.erase("bcd");
    print(um);

    return 0;
}
