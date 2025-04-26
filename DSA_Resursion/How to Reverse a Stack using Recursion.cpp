#include<bits/stdc++.h>
using namespace std;

void insertstack(stack<int> &st,int x){
  if(st.empty()){
    st.push(x);
  } else{
  int temp=st.top();
  st.pop();
  insertstack(st,x);
  st.push(temp);
  }
}

void reversestack(stack<int> &st){
  if(!st.empty()){
    int x=st.top();
    st.pop();
    reversestack(st);
    insertstack(st,x);
  }
}

int main(){
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  
  reversestack(st);
  
  while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
  }
  
  return 0;
}