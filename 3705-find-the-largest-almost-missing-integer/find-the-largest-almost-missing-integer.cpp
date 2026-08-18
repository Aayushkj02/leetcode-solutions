class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> save;
        for(int x : nums){
            save[x]++;
        }
        int n= nums.size();
        int ans = -1;
        if(k==1){
            for(auto &[key,freq]: save){
                if(freq == 1) ans = max(ans,key); 
            }
            return ans;
        }
        int big = *max_element(nums.begin(),nums.end());
        if(k == nums.size()) return big;
        if(save[nums[0]] == 1) ans = max(ans,nums[0]);
        if(save[nums[n-1]] == 1) ans= max(ans,nums[n-1]);
        return ans;
    }
};