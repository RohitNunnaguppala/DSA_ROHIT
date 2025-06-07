class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int l=0, r=0;
        int m=g.size();
        int n=s.size();

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        while(l<m && r<n){
            if(g[l]<=s[r]){
                l++;
            }
            r++;
        }
        return l;
    }
};