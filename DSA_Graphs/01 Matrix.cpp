#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> updatematrix(vector<vector<int>>& mat){
    int n=mat.size();
    int m=mat[0].size();

    vector<vector<int>> dist(n,vector<int>(m,0));
    vector<vector<int>> vis(n,vector<int>(m,0));
    queue<pair<pair<int,int>,int>> q;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                q.push({{i,j},0});
                vis[i][j]=1;
            }
        }
    }

    int delrow[]={-1,0,1,0};
    int delcol[]={0,1,0,-1};

    while(!q.empty()){
        int row=q.front().first.first;
        int col=q.front().first.second;
        int d=q.front().second;
        q.pop();
        dist[row][col]=d;

        for(int i=0;i<4;i++){
            int newrow=row+delrow[i];
            int newcol=col+delcol[i];
            if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && vis[newrow][newcol]==0){
                q.push({{newrow,newcol},d+1});
                vis[newrow][newcol]=1;
            }
        }
    }
    return dist;
}