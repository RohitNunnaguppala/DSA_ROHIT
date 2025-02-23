#include<bits/stdc++.h>
using namespace std;


vector<int> toposort(int v,vector<int> adj[]){
  int indegree[v]={0};
  for(int i=0;i<v;i++){
    for(auto it:adj[i]){
      indegree[it]++;
    }
  }
  
  queue<int> q;
  for(int i=0;i<v;i++){
    if(indegree[i]==0){
      q.push(i);
    }
  }
  
  int cnt=0;
  while(!q.empty()){
    int node=q.front();
    q.pop();
    cnt++;
    
    for(auto it:adj[node]){
      indegree[it]--;
      if(indegree[it]==0){
        q.push(it);
      }
    } 
  }
    if(cnt==v){
        cout<<"No cycle"<<endl;
    }
    else{
        cout<<"Cycle"<<endl;
    }
}

int main() {

	vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
	int v = 6;
	toposort(v, adj);
	return 0;
}