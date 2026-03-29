class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currLow = prices[0];
        int ans = 0;
        for(int i=1;i<prices.size();i++){
            ans = max(prices[i]-currLow,ans);
            currLow = min(currLow,prices[i]);
        }
        return ans;
    }
};
