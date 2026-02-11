//Leetcode Solution for question 53: Maximum Subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN; 
        int currSum = 0;
        
        // Kadane's Algorithm
        for (int i : nums) {
            currSum += i;
            
            if (currSum > maxSum) {
                maxSum = currSum;
            }
            
            if (currSum < 0) {
                currSum = 0;
            }
        }
        return maxSum;
    }
};
