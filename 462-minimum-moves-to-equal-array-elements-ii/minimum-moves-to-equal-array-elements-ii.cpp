class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int median = 0;
        int count = 0;

        if(nums.size() % 2 == 0) {
            median = (nums[nums.size() / 2] + nums[(nums.size() / 2) - 1]) / 2;
        }

        else {
            median = nums[nums.size() / 2];
        }

        for(int num : nums) {
            count += abs(median - num);
        }

        return count;
    }
};