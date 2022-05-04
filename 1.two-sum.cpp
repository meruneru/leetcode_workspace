/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    //vector<int> twoSum(vector<int> &nums, int target)
    //{
    //    // O(n^2)
    //    for (int i = 0; i < nums.size(); i++)
    //    {
    //        for (int j = i + 1; j < nums.size(); j++)
    //        {
    //            if (nums[i] + nums[j] == target)
    //            {
    //                return vector<int>{i, j}; // found
    //            }
    //        }
    //    }
    //    return vector<int>{-1,-1}; // not found
    //}
    template <class C>
    void print(const C &c, std::ostream &os = std::cout)
    {
        std::for_each(std::begin(c), std::end(c), [&os](typename C::value_type p)
                      { os << '{' << p.first << ',' << p.second << "}, "; });
        os << std::endl;
    }
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // O(n)
        vector<int> result;
 
        unordered_map<int, int> hash;
        // key: nums[i]
        // value: index

        for(int i=0; i<nums.size(); i++){
            int dist = target - nums[i];
            //print(hash);
            if(hash.find(dist) != hash.end()){
                result.emplace_back(hash[dist]);
                result.emplace_back(i);
                break;
            }
            hash[nums[i]] = i;
        }
        return result;
    }
};
// @lc code=end
