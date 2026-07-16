//This is the optimal approach with time complexity: O(n) rather than my previous approach with time complexity: O(n (log n))
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int i=0;
        int j=n-1;
        int index=n-1;

        while(i<=j){
            if(abs(nums[i]) > abs(nums[j])){
                ans[index] = nums[i] * nums[i];
                i++;
            }
            else{
                ans[index] = nums[j] * nums[j];
                j--;
            }
            index--;
        }
        return ans;
    }
};