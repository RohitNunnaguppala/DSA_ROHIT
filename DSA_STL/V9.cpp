#include<bits/stdc++.h>
using namespace std;


void print(map<int, int> &m) {
    cout << m.size() << endl;
    for(auto &pr: m) {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main() {
    
    map<int, string> m1;
    m1[1] = "abc";  
    m1[5] = "cdc";
    m1[3] = "acd";
    m1[6] = "a";
    m1[5] = "cde";  

    auto it1 = m1.find(7);  
    if(it1 == m1.end()) {
        cout << "No value found for key 7" << endl;
    } else {
        cout << (*it1).first << " " << (*it1).second << endl;
    }

    
    m1.insert({4, "afg"});

    
    for(auto it = m1.begin(); it != m1.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    
    map<string, string> m2;
    m2["abcd"] = "abcd"; 

    auto it2 = m2.find("abcd"); 
    if(it2 != m2.end()) {
        m2.erase(it2);  
    }

    
    map<int, int> m3;
    m3[6]; 
    print(m3);

    return 0;
}
