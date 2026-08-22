#include <string>

class Solution {
public:
    bool checkDivisibility(int n) {
        string s = to_string(n);
        int sum = 0;
        int mul = 1;
        
        for (char c : s) {
            int digit = c - '0';
            sum += digit;
            mul *= digit;
        }
        
        int total_sum = sum + mul;
        
        if (total_sum == 0) {
            return false; 
        }
        
        return (n % total_sum == 0);
    }
};
