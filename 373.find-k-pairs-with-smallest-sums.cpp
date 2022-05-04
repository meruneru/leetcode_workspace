/*
 * @lc app=leetcode id=373 lang=cpp
 *
 * [373] Find K Pairs with Smallest Sums
 */

// @lc code=start
class Solution {
public:
    //vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
    //    //Time Limit Exceeded
    //    multimap<pair<int,int>, int> mp;

    //    for(int i=0; i<nums1.size(); i++){
    //        for(int j=0; j<nums2.size(); j++){
    //            //mp[{nums1[i], nums2[j]}] = nums1[i] + nums2[j];
    //            //cout<<nums1[i]<<" "<<nums2[j]<<endl;
    //            mp.insert({{nums1[i], nums2[j]}, nums1[i] + nums2[j]});
    //        }
    //    }

    //    typedef pair<int, pair<int,int>> pii;
    //    priority_queue<pii, vector<pii>, greater<pii>> pq;
    //    for(auto& i:mp){
    //        //cout<<i.second<<" "<<i.first.first<<" "<<i.first.second<<endl;
    //        pq.push(make_pair(i.second, i.first));
    //    }
    //    vector<vector<int>> ret;
    //    for(int i=0; i<k; i++){
    //        if(pq.empty())break;
    //        ret.push_back({pq.top().second.first, pq.top().second.second});
    //        pq.pop();
    //    }
    //    return ret;
    //}
    
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        typedef pair<int,int> pii;
        auto comp = [](const pii& a, const pii& b){
            return a.first + a.second < b.first + b.second;
        };
        priority_queue<pii, vector<pii>, decltype(comp)> pq(comp);

        for(auto& i:nums1){
            for(auto& j:nums2){
                pq.push({nums1[i], nums2[j]});
                if(pq.size() > k){
                    pq.pop();
                }
            }
        }

        vector<vector<int>> ret;
        for(int i=0; i<k; i++){
            if(pq.empty())break;
            ret.push_back({pq.top().first, pq.top().second});
            pq.pop();
        }
        return ret;
    }
};
// @lc code=end

