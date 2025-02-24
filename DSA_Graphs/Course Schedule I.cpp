#include<bits/stdc++.h>
using namespace std;


bool canfinish(int V,vector<vector<int>>& prereq){
    vector<int> adj[V];
    for(auto it:prereq){
        adj[it[1]].push_back(it[0]);
    }

    vector<int> indegree(V, 0);
    for(int i=0;i<V;i++){
        for(auto it:adj[i]){
            indegree[it]++;
        }
    }

    queue<int> q;
    for(int i=0;i<V;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    vector<int> topo;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);

        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }

    if(topo.size()==V){
        return true;
    }
    return false;
}

int main() {

    vector<vector<int>> prereq={{1,0},{2,1},{3,2},{4,3}};
    int V=5;
    cout<<canfinish(V,prereq)<<endl;
    return 0;
}