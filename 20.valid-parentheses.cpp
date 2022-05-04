/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(auto& i:s){
            if(i == '(' || i == '[' || i=='{'){
                st.push(i);
                continue;
            }
            if(st.empty())return false;

            switch(i){
                case ')':
                    if(st.top() == '(')st.pop();
                    else return false;
                    break;
                case ']':
                    if(st.top() == '[')st.pop();
                    else return false;
                    break;
                case '}':
                    if(st.top() == '{')st.pop();
                    else return false;
                    break;
            }
        }
        if(!st.empty())return false;
        return true;
    }
};
// @lc code=end

