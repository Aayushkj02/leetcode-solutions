class Solution {
public:
    int minMoves(vector<int>& nums) {
        int small = INT_MAX;

        for(int num : nums){
            small = min(num, small);
        }

        int minMoves = 0;

        for(int num : nums){
            minMoves += num - small;
        }
        
        return minMoves;
    }
};