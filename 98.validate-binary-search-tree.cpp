/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
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
    //解けてない。INT_MIN, INT_MAXではなく、INT_MIN-1, INT_MAX+1を使いたいがこの環境ではつけないみたい
    //[3,1,5,0,2,4,6,null,null,null,3]\n
    //[-2147483648,null,2147483647]\n
    //[-2147483648,null,2147483647,-2147483648]\n

    bool helper(TreeNode* root, int min, int max){
        if(root==nullptr)return true;
        //cout<<"min:"<<min<<" val:"<<root->val<<" max:"<<max<<endl;
        if(root->left && root->val==root->left->val)return false;
        if(root->right && root->val==root->right->val)return false;
        if (root->val <= min || root->val >= max) return false;
        return helper(root->left, min, root->val) && helper(root->right, root->val, max);
    }
    bool isValidBST(TreeNode* root) {
        if(root==nullptr)return true;
        if(root->left==nullptr && root->right==nullptr)return true;
        return helper(root,INT_MIN,INT_MAX);
    }
};
// @lc code=end

