class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max_product = 0;
        for(int j = nums.size() -1; j>0; j--){
            for(int i = j-1; i>=0; i--){
                max_product = max(max_product, (nums[i]-1) * (nums[j]-1));
            }
        }
        return max_product;
    }
};