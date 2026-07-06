class Solution {
public:
    double average(vector<int>& salary) {
        int ans = 0;
        double average;
        int n = salary.size();
        sort(salary.begin(), salary.end());
        for (int i=1; i<salary.size()-1; i++){
             ans = (ans + salary[i]);
             average = (double)ans/(n-2);
        }
        return average;
    }
};