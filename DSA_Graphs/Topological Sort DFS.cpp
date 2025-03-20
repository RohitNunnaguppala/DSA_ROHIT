//topo sort
#include<bits/stdc++.h>
using namespace std;

void dfs(int node,int vis[],stack<int> &s,vector<int> adj[]){
  vis[node]=1;
  for(auto it:adj[node]){
    if(!vis[it]){
      dfs(it,vis,s,adj);
    }
  }
  s.push(node);
}
vector<int> toposort(int v,vector<int> adj[]){
  int vis[v]={0};
  stack<int> s;
  for(int i=0;i<v;i++){
    if(!vis[i]){
      dfs(i,vis,s,adj);
    }
  }
  
  vector<int> ans;
  while(!s.empty()){
    ans.push_back(s.top());
    s.pop();
  }
  return ans;
}

int main() {
    int v = 6;
    vector<int> adj[v];

    adj[5].push_back(0);
    adj[5].push_back(2);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(1);

    vector<int> result = toposort(v, adj);
    
    cout << "Topological Sort: ";
    for (auto node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
