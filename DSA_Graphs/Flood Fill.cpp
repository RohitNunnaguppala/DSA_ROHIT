#include<bits/stdc++.h>
using namespace std;


class Solution {
    private:
        void dfs(int row,int col,vector<vector<int>>& ans,vector<vector<int>>& image,
        int inicolor,int delrow[],int delcol[],int color){
            ans[row][col]=color;
            int n=image.size();
            int m=image[0].size();
    
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
    
                if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&image[nrow][ncol]==inicolor&&
                ans[nrow][ncol]!=color){
                    dfs(nrow,ncol,ans,image,inicolor,delrow,delcol,color);
                }
            }
        }
    public:
        vector<vector<int>> floodFill(vector<vector<int>>& image,
         int sr, int sc, int color) {
            int inicolor=image[sr][sc];
            vector<vector<int>> ans=image;
            int delrow[]={-1,0,+1,0};
            int delcol[]={0,+1,0,-1};
            dfs(sr,sc,ans,image,inicolor,delrow,delcol,color);
            return ans;
        }
    };

int main(){
    Solution solution;
    vector<vector<int>> image = {
        {1,1,1},
        {1,1,0},
        {1,0,1},
        };
    vector<vector<int>> ans=solution.floodFill(image,1,1,2);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}