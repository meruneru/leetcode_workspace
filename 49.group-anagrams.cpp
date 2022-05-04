/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;

        for (auto& s: strs){
            string t = s;
            sort(t.begin(), t.end());
            hash[t].emplace_back(s);
        }
        vector<vector<string>> result;
        for (auto& h: hash){
            result.emplace_back(h.second);
        }
        return result;
    }
};
// @lc code=end

