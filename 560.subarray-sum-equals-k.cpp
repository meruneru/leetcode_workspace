/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    //int subarraySum(vector<int>& nums, int k) {
    //    //O(n^2)
    //    vector<int> cursum(nums.size()+1, 0);

    //    for(int i=0; i<nums.size(); i++){
    //        cursum[i+1] = cursum[i] + nums[i];
    //    }

    //    int ret = 0;
    //    for(int i=0; i<nums.size(); i++){
    //        for(int j=i+1; j<=nums.size(); j++){
    //            //cout<<"i:"<<i<<" j:"<<j<<" cursum[j]:"<<cursum[j]<<" cursum[i]:"<<cursum[i]<<endl;
    //            if(cursum[j]-cursum[i] == k){
    //                ret++;
    //            }
    //        }
    //    }
    //    return ret;
    //}
    int subarraySum(vector<int>& nums, int k) {
        int ret =0;
        unordered_map<int, int> hash;
        int cumsum = 0;
        for(int i=0; i<nums.size(); i++){
            cumsum += nums[i];
            if(cumsum == k){
                ret++;
            }
            if(hash.find(cumsum - k) != hash.end()){
                ret+=hash[cumsum - k];
            }
            hash[cumsum]++;
        }
        return ret;
    }
};
// @lc code=end

