class Solution {
public:
   bool issafe(int r,int c,vector<string> &b,int n){
  int dr=r;
  int dc=c;
  
  while(r>=0 &&c>=0){
    if(b[r][c]=='Q') return false;
    r--;
    c--;
  }
  
  r=dr;
  c=dc;
  while(c>=0){
    if(b[r][c]=='Q') return false;
    c--;
  }
  
  r=dr;
  c=dc;
  while(r<n &&c>=0){
    if(b[r][c]=='Q') return false;
    r++;
    c--;
  }
  
  return true;
  
}

void fun(int c,vector<vector<string>> &ans,vector<string> &b,int n){
  if(c==n){
    ans.push_back(b);
    return;
  }
  
  for(int r=0;r<n;r++){
    if(issafe(r,c,b,n)){
      b[r][c]='Q';
      fun(c+1,ans,b,n);
      b[r][c]='.';
    }
  }
}

vector<vector<string>> solveNQueens(int n) {
  vector<vector<string>> ans;
  vector<string> b(n,string (n,'.'));
  fun(0,ans,b,n);
  return ans;
}
};