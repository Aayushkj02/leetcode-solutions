class Solution {
public:
    bool soln(vector<vector<int>>& grid,int r,int c,int n,int ExValue){

        if(c < 0 || r < 0 || c >= n || r >= n || (grid[r][c] != ExValue)){
            return false;
        }

        if (ExValue ==  n*n-1){
            return true;
        }

        bool ans1 = soln(grid,r-2,c+1,n,ExValue + 1);
        bool ans2 = soln(grid,r-1,c+2,n,ExValue + 1);
        bool ans3 = soln(grid,r+1,c+2,n,ExValue + 1);
        bool ans4 = soln(grid,r+2,c+1,n,ExValue + 1);
        bool ans5 = soln(grid,r+2,c-1,n,ExValue + 1);
        bool ans6 = soln(grid,r+1,c-2,n,ExValue + 1);
        bool ans7 = soln(grid,r-1,c-2,n,ExValue + 1);
        bool ans8 = soln(grid,r-2,c-1,n,ExValue + 1);

        return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();

        return soln(grid,0,0,n,0);
        
    }
};