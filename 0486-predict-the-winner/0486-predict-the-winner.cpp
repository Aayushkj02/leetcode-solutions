class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> p1(n, vector<int>(n));
        
        for (int i = 0; i < n; i++) {
            p1[i][i] = nums[i];
        }

        for (int len = 2; len <= n; len++) {
            for (int i = 0; i + len - 1 < n; i++) {
                int j = i + len - 1;
                int takeLeft = nums[i] - p1[i+1][j];
                int takeRight = nums[j] - p1[i][j-1];

                p1[i][j] = max(takeLeft, takeRight);
            }
        }

        return p1[0][n-1] >= 0;
    }
};
