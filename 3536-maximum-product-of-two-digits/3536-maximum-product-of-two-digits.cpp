class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);

        int maximum = 0;

        for (int i = 0; i < s.size(); i++) {
            for (int j = i + 1; j < s.size(); j++) {
                int a = s[i] - '0';
                int b = s[j] - '0';
                maximum = max(maximum, a * b);
            }
        }

        return maximum;
    }
};