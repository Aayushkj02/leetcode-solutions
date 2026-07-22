#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int i = 0;
        while (i < n - 3) {
            if (i > 0 && nums[i] == nums[i - 1]) { 
                i++; continue; 
            }

            int j = i + 1;
            while (j < n - 2) {
                if (j > i + 1 && nums[j] == nums[j - 1]) { 
                    j++; continue; 
                }

                int k = j + 1;
                int l = n - 1;

                while (k < l) {
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];

                    if (sum == target) {
                        res.push_back({nums[i], nums[j], nums[k], nums[l]});
                        while (k < l && nums[k] == nums[k + 1]) k++;
                        while (k < l && nums[l] == nums[l - 1]) l--;
                        k++; l--;
                    }
                    else if (sum < target) {
                        k++;
                    }
                    else {
                        l--;
                    }
                }
                j++;
            }
            i++;
        }
        return res;
    }
};
