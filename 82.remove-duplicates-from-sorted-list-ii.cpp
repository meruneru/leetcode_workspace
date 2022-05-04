/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
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
        ListNode* dummy=new ListNode();
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* cur = head;
        
        while(cur && cur->next){
            if(cur->val == cur->next->val){
                while(cur->next && cur->val == cur->next->val){
                    ListNode* tmp = cur;
                    cur = cur->next;
                    delete tmp;
                }
                prev->next = cur->next;
                cur = cur->next;
            }else{
                prev = cur;
                cur = cur->next;
            }
        }
        return dummy->next;
        
    }
};
// @lc code=end

