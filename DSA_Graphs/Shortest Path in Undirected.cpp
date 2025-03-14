#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> shortestPath(vector<vector<int>>& adj, int src) {
          int N=adj.size();
          
          vector<int> dist(N,1e9);
          queue<int> q;
          
          dist[src]=0;
          q.push(src);
          
          while(!q.empty()){
              int node=q.front();
              q.pop();
              
              for(auto neigh: adj[node]){
                  if(dist[node]+1<dist[neigh]){
                      dist[neigh]=dist[node]+1;
                      q.push(neigh);
                  }
              }
          }
          
          for(int i=0;i<N;i++){
              if(dist[i]==1e9){
                  dist[i]=-1;
              }
          }
          return dist;
      }
  };

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int src;
    cin >> src;
    Solution obj;
    vector<int> ans = obj.shortestPath(adj, src);
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;