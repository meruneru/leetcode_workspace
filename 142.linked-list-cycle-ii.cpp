/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
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
    ListNode *detectCycle(ListNode *head) {
        vector<ListNode*> v;
        while(head){
            if(find(v.begin(), v.end(), head->next) != v.end())return head->next; 
            v.push_back(head);
            head=head->next;
        }
        return nullptr;
        
    }
};
// @lc code=end

