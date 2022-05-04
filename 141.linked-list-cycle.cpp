/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        vector<ListNode*> v;
        while(head){
            if(find(v.begin(), v.end(), head->next) != v.end())return true;
            v.push_back(head->next);
            head=head->next;
        }
        return false;
    }
};
// @lc code=end

