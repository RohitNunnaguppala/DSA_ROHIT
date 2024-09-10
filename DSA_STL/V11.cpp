#include<bits/stdc++.h>
#include "V11.h"
using namespace std;

void stack1(stack<int> &s)
{
    s.push(2);
    s.push(3);
    s.push(8);
    s.push(5);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}

void queue1(queue<string> &q)
{
    q.push("abc");
    q.push("cde");
    q.push("efg");
    q.push("ghi");
    q.push("ijk");
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}

int main(){
    stack<int> s;
    stack1(s);
    queue<string> q;
    queue1(q);
    return 0;
}


