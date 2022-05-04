/*
 * @lc app=leetcode id=300 lang=cpp
 *
 * [300] Longest Increasing Subsequence
 */

// @lc code=start
int dp[10001];
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        fill(dp, dp+nums.size(), INT_MAX);
        for(int i=0;i<nums.size();i++){
            *lower_bound(dp, dp+nums.size(), nums[i]) = nums[i];
        }
        return lower_bound(dp, dp+nums.size(), INT_MAX) - dp;
    }
};
// @lc code=end

