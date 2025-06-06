#include <bits/stdc++.h>
using namespace std;

void findpaths(int i,int j,vector<string> &ans,vector<vector<int>> &vis,vector<vector<int>> &a,int n,string s){
  if(i==n-1&&j==n-1){
    ans.push_back(s);
    return;
  }
  
  if(i+1<n&&!vis[i+1][j]&&a[i+1][j]==1){
    vis[i][j]=1;
    findpaths(i+1,j,ans,vis,a,n,s+'D');
    vis[i][j]=0;
  }
  
  if(j-1>=0&&!vis[i][j-1]&&a[i][j-1]==1){
    vis[i][j]=1;
    findpaths(i,j-1,ans,vis,a,n,s+'L');
    vis[i][j]=0;
  }
  
  if(j+1<n&&!vis[i][j+1]&&a[i][j+1]==1){
    vis[i][j]=1;
    findpaths(i,j+1,ans,vis,a,n,s+'R');
    vis[i][j]=0;
  }
  
  if(i-1>=0&&!vis[i-1][j]&&a[i-1][j]==1){
    vis[i][j]=1;
    findpaths(i-1,j,ans,vis,a,n,s+'U');
    vis[i][j]=0;
  }
  
}
vector<string> findPath(vector<vector<int>> &m, int n){
  vector<string> ans;
  vector<vector<int>> vis(n,vector<int> (n,0));
  if(m[0][0]==1) findpaths(0,0,ans,vis,m,n,"");
  return ans;
}

int main() {
  int n = 4;

   vector < vector < int >> m = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
  vector < string > result = findPath(m, n);
  if (result.size() == 0)
    cout << -1;
  else
    for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
  cout << endl;

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

void findpaths(int i,int j,vector<string> &ans,vector<vector<int>> &vis,vector<vector<int>> &a,int n,string s,vector<int>& di, vector<int>& dj){
  if(i==n-1&&j==n-1){
    ans.push_back(s);
    return;
  }
  string dir = "DLRU";
  for (int ind = 0; ind < 4; ind++) {
    int nexti = i + di[ind];
    int nextj = j + dj[ind];
    if (nexti >= 0 && nextj >= 0 && nexti < n && nextj < n &&
        !vis[nexti][nextj] && a[nexti][nextj] == 1) {
      vis[i][j] = 1;
      findpaths(nexti, nextj, ans, vis, a, n, s + dir[ind], di, dj);
      vis[i][j] = 0;
    }
  }
}
vector<string> findPath(vector<vector<int>> &m, int n){
  vector<string> ans;
  vector<vector<int>> vis(n,vector<int> (n,0));
  vector<int> di={+1,0,0,-1};
  vector<int> dj={0,-1,1,0};
  if(m[0][0]==1) findpaths(0,0,ans,vis,m,n,"",di,dj);
  return ans;
}

int main() {
  int n = 4;

   vector < vector < int >> m = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
  vector < string > result = findPath(m, n);
  if (result.size() == 0)
    cout << -1;
  else
    for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
  cout << endl;

  return 0;
}