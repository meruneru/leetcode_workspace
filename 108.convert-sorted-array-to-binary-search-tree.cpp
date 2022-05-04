/*
 * @lc app=leetcode id=108 lang=cpp
 *
 * [108] Convert Sorted Array to Binary Search Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void helper(vector<int>& nums, int start, int end, TreeNode*& root) {
        if (start > end) {
            return;
        }
        int mid = start + (end - start) / 2;
        root = new TreeNode(nums[mid]);
        helper(nums, start, mid - 1, root->left);
        helper(nums, mid + 1, end, root->right);
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty())return nullptr;

        TreeNode *res = nullptr;
        helper(nums, 0, nums.size()-1, res);
        return res;
    }
};
// @lc code=end

