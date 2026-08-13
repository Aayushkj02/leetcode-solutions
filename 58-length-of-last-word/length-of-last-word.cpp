class Solution {
public:
    int lengthOfLastWord(string s) {
        string res = "";
        int count = 0;
        int n = s.length();

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ' ' && res.empty()) {
                continue;
            }
            if (s[i] == ' ' && !res.empty()) {
                break;
            }
            res += s[i]; 
        }

        for (int i = 0; i < res.length(); i++) {
            count++;
        }

        return count;
    }
};
