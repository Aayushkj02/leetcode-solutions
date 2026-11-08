class Solution {
public:
    bool is_palindrome(int i, int j, string& s) {
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        if (n <= 1) return s;

        int max_len = 1;
        string max_str = s.substr(0, 1);

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int k = j - i + 1;

                if (k > max_len && is_palindrome(i, j, s)) {
                    max_len = k;
                    max_str = s.substr(i, k);
                }
            }
        }

        return max_str;
    }
};