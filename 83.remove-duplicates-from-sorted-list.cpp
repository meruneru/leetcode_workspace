/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur = head;
        while(cur){
            int x = cur->val;
            if(cur->next && cur->next->val == x){
                ListNode* tmp = cur->next;
                cur->next = tmp->next;
                delete tmp;
                continue;
            }
            cur = cur->next;
        }
        return head;
    }
};
// @lc code=end

