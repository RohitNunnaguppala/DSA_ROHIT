#include<bits/stdc++.h>
using namespace std;


void dfs(int node,vector<int> adj[], int vis[], vector<int> &ls){
    vis[node]=1;
    ls.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ls);
        }
    }
}
vector<int> dfsofgraph(int v,vector<int> adj[]){
    int vis[v]={0};
    int start=0;
    vector<int> ls;
    dfs(start,adj,vis,ls);
    return ls;
}

void addedge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printans(vector<int> &ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    vector<int> adj[6];
    
    addedge(adj,0,2);
    addedge(adj,2,4);
    addedge(adj,0,1);
    addedge(adj,0,3);
    
    vector<int> ans=dfsofgraph(5,adj);
    printans(ans);
    
    return 0;
}