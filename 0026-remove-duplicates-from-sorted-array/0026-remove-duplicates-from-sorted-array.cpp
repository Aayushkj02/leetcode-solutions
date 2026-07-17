class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int i = 0; 
        
        for (int j = 1; j < nums.size(); ) {
            if (nums[i] == nums[j]) {
                nums.erase(nums.begin() + j); 
            } else {
                i = j; 
                j++;  
            }
        }
        return nums.size();
    }
};
