class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        vector<int> scoreDiff(n+1, 0); //Max diff between Alice & Bob
        scoreDiff[n] = 0;

        for(int i=n-1; i>=0; i--){
            scoreDiff[i] = INT_MIN;
            int sum = 0;

            for(int j = 0; j<3 && i+j<n; j++){
                sum = sum + stoneValue[i+j];
                scoreDiff[i] = max(scoreDiff[i], sum - scoreDiff[i+j+1]);
            }
        }
        
        if(scoreDiff[0] > 0){
            return "Alice";
        }

        else if(scoreDiff[0] < 0){
            return "Bob";
        }

        else{
            return "Tie";
        }
    }
};
