/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>   m;
        for(auto& i:nums){
            m[i]++;
        }
        vector<int> ret;

        priority_queue<pair<int, int>> pq;
        for(auto& i:m){
            //priority_queueのデフォルトは優先度が高い順になるため、
            //numsの出現頻度をキーとすることで、出現頻度順にソートsareru
            
            pq.push(make_pair(i.second, i.first));
        }
        for(int i=0; i<k; i++){
            ret.push_back(pq.top().second);
            pq.pop();
        }
        return ret;
    }
};
// @lc code=end

