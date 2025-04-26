#include<bits/stdc++.h>
using namespace std;

void insertstack(stack<int> &st,int x){
  if(st.empty()||st.top()<x){
    st.push(x);
    return ;
  }
  int temp=st.top();
  st.pop();
  insertstack(st,x);
  st.push(temp);
}

void sortstack(stack<int> &st){
  if(!st.empty()){
    int x=st.top();
    st.pop();
    sortstack(st);
    insertstack(st,x);
  }
}

int main(){
  stack<int> st;
  st.push(11);
  st.push(2);
  st.push(32);
  st.push(3);
  st.push(41);
  
  sortstack(st);
  
  while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
  }
  
  return 0;
}