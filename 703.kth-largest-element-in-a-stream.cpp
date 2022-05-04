/*
 * @lc app=leetcode id=703 lang=cpp
 *
 * [703] Kth Largest Element in a Stream
 */

// @lc code=start
class KthLargest {
private:
    int m_k;
    priority_queue<int, vector<int>, greater<int>>m_pq;

public:
    KthLargest(int k, vector<int>& nums) :m_k(k){
        for(auto& i: nums){
            this->add(i);
        }
    }

    int add(int val) {
        if(m_pq.size() < m_k){
            m_pq.push(val);
        }else{
            if(val > m_pq.top()){
                m_pq.pop();
                m_pq.push(val);
            }
        }
        return m_pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
// @lc code=end

