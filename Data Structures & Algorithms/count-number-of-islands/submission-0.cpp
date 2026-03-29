class Solution {
private:
    void dfs(vector<vector<char>>& grid, int row, int col, int n, int m){
        if(row<0 || row>=n || col<0 || col>=m || grid[row][col] != '1') return;

        vector<pair<int, int>> dir = {{0,-1}, {-1, 0}, {0,1}, {1,0}};
        grid[row][col] = '2';

        for(int i=0;i<4;i++){
            dfs(grid, row+dir[i].first, col+dir[i].second, n, m);
        }

        return;
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == '1'){
                    count++;
                    dfs(grid, i, j, n, m);
                }
            }
        }
        return count;
    }
};
