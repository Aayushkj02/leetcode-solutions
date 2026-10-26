class Solution {
public:
    long long sum = 0;
    int m,n;

    int countIslands(vector<vector<int>>& grid, int k) {
        
        m = grid.size();
        n = grid[0].size();
        int ans = 0;

        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j] != 0){
                    sum = 0;
                    dfs(grid,i,j);

                    if(sum % k == 0) ans++;
                }
            }
        }
        return ans;
    }


    void dfs(vector<vector<int>> & grid,int i,int j){
        if(i < 0 || j < 0 || i >= m || j >= n) return;
        if(grid[i][j] == 0) return;
        sum += grid[i][j];
        grid[i][j] = 0;

        dfs(grid,i-1,j);
        dfs(grid,i+1,j);
        dfs(grid,i,j-1);
        dfs(grid,i,j+1);
    }
};