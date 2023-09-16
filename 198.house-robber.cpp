/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty())return 0;
        if(nums.size() == 1)return nums[0];
        if(nums.size() == 2)return max(nums[0], nums[1]);
        vector<int> dp(nums.size(), 0);
        dp[0]=nums[0];
        dp[1]=nums[1];
        dp[2]=nums[2]+nums[0];
        for(int i=3;i<nums.size();i++){
            dp[i]=max(dp[i-2],dp[i-3])+nums[i];
        }
        return max(dp[nums.size()-1],dp[nums.size()-2]);
    }
};
// @lc code=end

