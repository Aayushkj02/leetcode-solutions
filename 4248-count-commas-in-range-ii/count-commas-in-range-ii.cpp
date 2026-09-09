class Solution {
public:
    long long countCommas(long long n) {
        long long commas = 0;
        long long digit = 1000;

        while (n >= digit){
            commas = commas + (n - digit + 1);
            digit = digit * 1000;
        }

        return commas;
    }
};