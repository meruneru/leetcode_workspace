/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty() || prices.size()==1)return 0;

        vector<int> dp(prices.size(), 0);
        dp[1] = max(0, prices[1] - prices[0]);
        int minval = min(prices[0], prices[1]);
        for(int i=2; i<prices.size(); i++){
            minval = min(minval, prices[i-1]);
            dp[i] = max(dp[i-1], prices[i] - minval);
        }
        return dp[prices.size()-1];
    }
};
// @lc code=end

