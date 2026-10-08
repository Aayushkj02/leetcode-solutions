class Solution {
public:
    bool check_Palindrome(string s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j])
                return false;
            else {
                i++;
                j--;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int n = s.size();
        int i = 0;
        int j = n - 1;
        while (i < j) {
            if (s[i] == s[j]) {
                i++;
                j--;
            } else {
                return check_Palindrome(s, i + 1, j) || check_Palindrome(s, i, j - 1);
            }
        }
        return true;
    }
};