/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int cur_max = nums[0];
        for(int i=1;i<nums.size();i++){
            cur_max = max(cur_max+nums[i], nums[i]);
            res = max(res, cur_max);
        }
        return res;
    }
};
// @lc code=end

