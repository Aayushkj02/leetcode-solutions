class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<pair<int, int>> ans;
        vector<int> res;

        for(int x : nums1){
            ans.push_back({x,1});
        }
        
        for(int x : nums2){
        ans.push_back({x,2});
        }

        sort(ans.begin(), ans.end());
        int i = 0;

        while (i < ans.size()){
            bool first = false;
            bool second = false;
            int value = ans[i].first;

            while(i<ans.size() && ans[i].first == value){
                if(ans[i].second == 1){
                    first = true;
                }
                else{
                    second = true;
                }
                i++;
            }

            if(first && second){
                res.push_back(value);
            }
        }
        return res;
    }
};