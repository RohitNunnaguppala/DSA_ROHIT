#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        void bfs(int r,int c,vector<vector<int>> &vis,vector<vector<char>>& grid){
            vis[r][c]=1;
            queue<pair<int,int>> q;
            q.push({r,c});
            int n=grid.size();
            int m=grid[0].size();
    
            int drow[] = {-1, 0, 1, 0};  
            int dcol[] = {0, 1, 0, -1};
    
            while(!q.empty()){
                int row=q.front().first;
                int col=q.front().second;
                q.pop();
    
                for (int i = 0; i < 4; i++){
                        int nrow=row+drow[i];
                        int ncol=col+dcol[i];
                        if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&grid[nrow][ncol]=='1'&&!vis[nrow][ncol]){
                            vis[nrow][ncol]=1;
                            q.push({nrow,ncol});
                        }
                }
    
            }
        }
    public:
        int numIslands(vector<vector<char>>& grid) {
            int n=grid.size();
            int m=grid[0].size();
            vector<vector<int>> vis(n,vector<int>(m,0));
            int cnt=0;
            for(int r=0;r<n;r++){
                for(int c=0;c<m;c++){
                    if(!vis[r][c]&&grid[r][c]=='1'){
                        cnt++;
                        bfs(r,c,vis,grid);
                    }
                }
            }
            return cnt;
        }
    };

int main(){
    Solution solution;
    vector<vector<char>> grid = {
        {'1', '1', '1', '1', '0'},
        {'1', '1', '0', '1', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '0', '0', '0'},
        };
    cout<<solution.numIslands(grid)<<endl;
    return 0;
}