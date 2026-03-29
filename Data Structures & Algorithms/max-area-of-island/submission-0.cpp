class Solution {
private:
    int dfs(vector<vector<int>>& grid, int row, int col){
        if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || grid[row][col] == 0) return 0;
        grid[row][col] = 0;
        int area = 1;
        vector<pair<int,int>> dir = {{0,-1}, {-1,0}, {0,1}, {1,0}};
        for(int i=0;i<4;i++){
            area += dfs(grid, row+dir[i].first, col+dir[i].second);
        }

        return area;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int maxArea = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1){
                    maxArea = max(maxArea, dfs(grid, i, j));
                }
            }
        }

        return maxArea;
    }
};