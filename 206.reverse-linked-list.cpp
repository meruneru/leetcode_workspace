/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
    ListNode* reverseList(ListNode* head) {
        stack<int> s;

        while(head){
            s.push(head->val);
            head = head->next;
        }
        if(s.empty())return nullptr;

        ListNode *cur = new ListNode(s.top());
        ListNode *ret = cur;
        s.pop();
        while(!s.empty()){
            ListNode *tmp = new ListNode(s.top());
            cur->next = tmp;
            cur = cur->next;
            s.pop();
        }
        return ret;
    }
};
// @lc code=end

