class Solution {
public:
    bool check(vector<int>& nums) {
        
        vector<int> sorted(nums.begin(), nums.end());
        sort(sorted.begin(), sorted.end());

        if (nums == sorted)
            return true;

        vector<int> ans(nums.size());

        for (int j = 0; j < nums.size(); j++) {
            for (int i = 0; i < nums.size(); i++) {
                ans[(i + 1) % nums.size()] = nums[i];
            }
            if (ans == sorted)
                return true;
            nums = ans;
        }
        return false;
    }
};
