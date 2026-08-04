class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        if (n == 0) {
            return ans;
        }

        sort(nums.begin(), nums.end());

        int k = nums[n-1] - 1;

        for (k; k > nums[0]; k--) {
            if (find(nums.begin(), nums.end(), k) != nums.end()) { 
                continue;
            }
            
            else {
                ans.push_back(k);
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
