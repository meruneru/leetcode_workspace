/*
 * @lc app=leetcode id=929 lang=cpp
 *
 * [929] Unique Email Addresses
 */

// @lc code=start

class Solution
{
public:
    int numUniqueEmails(vector<string> &emails)
    {
        unordered_set<string> ret;
        for (auto &email : emails)
        {
            string local = email.substr(0, email.find('@'));
            string domain = email.substr(email.find('@'));
            local = local.substr(0, local.find('+'));
            for(auto it=local.find('.'); it!=string::npos; it=local.find('.')){
                local.erase(it,1);
            }
            if (ret.find(local + domain) == ret.end())
            {
                ret.insert(local + domain);
            }
        }
        return ret.size();
    }
};
// @lc code=end
