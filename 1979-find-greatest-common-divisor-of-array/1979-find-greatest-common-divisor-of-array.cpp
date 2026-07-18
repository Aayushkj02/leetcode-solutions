class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int min = *min_element(nums.begin(), nums.end()); 
        int max = *max_element(nums.begin(), nums.end());
        
        while(min !=0){
            int res = max % min;
            max = min;
            min = res;
        }
        return max;
    }
};