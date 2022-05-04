/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        int ret = INT_MAX;
        unordered_map<char, vector<int>> hash;
        if(s.empty())return 0;

        for(int i=0; i<s.size(); i++){
            hash[s[i]].emplace_back(i);
        }
        
        for(auto& i: hash){
            if(i.second.size() == 1){
                ret = min(ret, i.second[0]);
            }
        }
        if(ret == INT_MAX){
            return -1;
        }else{
            return ret;
        }
    }
};
// @lc code=end

