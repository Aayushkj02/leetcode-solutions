class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int i=0; 
        int j=0;

        while(i<nums1.size() || j<nums2.size()){

            if(i == nums1.size()){
                res.push_back(nums2[j]);
                j++;
            }
            else if(j == nums2.size()){
                res.push_back(nums1[i]);
                i++;
            }

            else if(nums1[i] < nums2[j]){
                res.push_back(nums1[i]);
                i++;
            }
            else{
                res.push_back(nums2[j]);
                j++;
            }
        }

        int mid = (0 + (res.size()-1)) / 2;
        double ans = 0;

        if(res.size() % 2 == 0){
            ans = res[mid] + res[mid + 1];
            ans = ans/2;
        }
        else{
            ans = res[mid];
        }
        return ans;
    }
};