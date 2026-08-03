class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        vector<int> scoreDiff (n+1, 0);

        for (int i = n - 1; i >= 0; i--){
            int sum = 0;
            int best = INT_MIN;

            for (int j = 0; j < 3 && j + i < n; j++){
                sum += stoneValue[i+j];
                best = max(best, sum - scoreDiff[i+j+1]);
            }

            scoreDiff[i] = best;

        }
        if (scoreDiff[0] > 0) {
            return "Alice";
        }

        else if (scoreDiff[0] < 0) {
            return "Bob";
        }
        
        else {
            return "Tie";
        }
    }
};