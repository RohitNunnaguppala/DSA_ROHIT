class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxpro=0;
       int mini=prices[0];
       for(int i=1;i<prices.size();i++){
        int curpro=prices[i]-mini;
        maxpro=max(maxpro,curpro);
        mini=min(mini,prices[i]);
       }
       return maxpro;
    }
};