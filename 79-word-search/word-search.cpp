class Solution {
public:
    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int idx) {

        if (idx == word.size()) {
            return true;
        }

        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[idx]) {
            return false;
        }

        char temp = board[i][j];
        board[i][j] = '#';

        bool found =
            dfs(board, word, i - 1, j, idx + 1) || // up
            dfs(board, word, i + 1, j, idx + 1) || // down
            dfs(board, word, i, j - 1, idx + 1) || // left
            dfs(board, word, i, j + 1, idx + 1);   // right

        // Backtrack
        board[i][j] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (dfs(board, word, i, j, 0)) {
                    return true;
                }

            }
        }

        return false;
    }
};