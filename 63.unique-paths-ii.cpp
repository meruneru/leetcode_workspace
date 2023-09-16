/*
 * @lc app=leetcode id=63 lang=cpp
 *
 * [63] Unique Paths II
 */

// @lc code=start
class Solution {
public:
    void printAll(vector<vector<int>>& dp) {
        const int m = dp.size();
        const int n = dp[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
        cout << "-------"<<endl;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid.empty()) return 0;
        if(obstacleGrid[0].empty()) return 0;
        const int m = obstacleGrid.size();
        const int n = obstacleGrid[0].size();
        if(obstacleGrid[0][0] == 1) return 0;
        vector<vector<int>> dp(m, vector<int>(n, 0));

        if(obstacleGrid[0][0] == 0) {
            dp[0][0] = 1;
        }
        for(int i = 1; i < m; i++){
            if(obstacleGrid[i][0] == 0) {
                dp[i][0] = dp[i-1][0];
            }
        }
        for(int j=1; j<n; j++){
            if(obstacleGrid[0][j] == 0) {
                dp[0][j] = dp[0][j-1];
            }
        }
        for (int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                if(obstacleGrid[i][j] == 0){
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }else{
                    dp[i][j] = 0;
                }
                //printAll(dp);
            }
        }
        return dp[m-1][n-1];
    }
};
// @lc code=end

