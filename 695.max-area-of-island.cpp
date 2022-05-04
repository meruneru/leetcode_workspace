/*
 * @lc app=leetcode id=695 lang=cpp
 *
 * [695] Max Area of Island
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i, int j, int& cnt){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j] == 0){
            return;
        }
        cnt++;
        grid[i][j] = 0;
        dfs(grid, i+1, j, cnt);
        dfs(grid, i-1, j, cnt);
        dfs(grid, i, j+1, cnt);
        dfs(grid, i, j-1, cnt);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 1){
                    int cnt = 0;
                    dfs(grid, i, j, cnt);
                    res = max(res, cnt);
                }
            }
        }
        return res;
    }
};
// @lc code=end

