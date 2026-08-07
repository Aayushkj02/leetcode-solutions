class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int total = n*n;

        unordered_map<int, int> count;
        int duplicate = -1;
        int missing = -1;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                count[grid[i][j]]++;
            }
        }

        for(int i=1; i<=total; i++){
            if(count[i] == 2) duplicate = i;
            if(count[i] == 0) missing = i;    
        }
        return {duplicate, missing};
    }
};