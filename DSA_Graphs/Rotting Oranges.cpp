#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int orangesRotting(vector<vector<int>>& grid) {
            int n=grid.size();
            int m=grid[0].size();
    
            queue<pair<pair<int,int>,int>> q;
            int freshcount=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(grid[i][j]==2){
                        q.push({{i,j},0});
                    }
                    else if (grid[i][j]==1){
                        freshcount++;
                    }
                }
            }
    
            int tm=0;
            int drow[]={-1,0,+1,0}; 
            int dcol[]={0,1,0,-1};
            while(!q.empty()){
                int r=q.front().first.first;
                int c=q.front().first.second;
                int t=q.front().second;
                tm=max(tm,t);
                q.pop();
    
                for(int i=0;i<4;i++){
                    int nrow=r+drow[i];
                    int ncol=c+dcol[i];
                    if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&grid[nrow][ncol]==1){
                        q.push({{nrow,ncol},t+1});
                        grid[nrow][ncol] = 2;  
                        freshcount--;  
                    }
                }
            }
            return freshcount == 0 ? tm : -1;
        }
    };

int main(){
    Solution solution;
    vector<vector<int>> grid = {{2,1},{1,1},{0,2}};
    cout<<solution.orangesRotting(grid)<<endl;
    return 0;
}

