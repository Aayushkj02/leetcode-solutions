class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();

        if (n <= 2) return false;

        int i = 0, j = n - 1;

        while (i + 1 < n && arr[i] < arr[i + 1]) {
            i++;
        }

        while (j - 1 >= 0 && arr[j] < arr[j - 1]) {
            j--;
        }

        if (i == 0 || j == n - 1) return false;
        return i == j;
    }
};
