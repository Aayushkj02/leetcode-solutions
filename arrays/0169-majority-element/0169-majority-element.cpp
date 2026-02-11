//Leetcode solution for Question: 0169-Majority Element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;
        int n = nums.size();


        // Boyer-Moore Voting Algorith
        for(int i=0;i<n;i++)
        {
            if(freq == 0)
            {
                ans = nums[i];
            }

            if(ans == nums[i])
            {
                freq++;
            }

            else
            {
                freq--;
            }
        }

        int count = 0;
        for(int val : nums)
        {
            count++;   
        }

        if(count>n/2)
            {
                return ans;
            }

            else
            {
                return -1;
            }
    }
};