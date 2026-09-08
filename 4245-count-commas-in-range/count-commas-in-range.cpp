class Solution {
public:
    int countCommas(int n) {
        int commas = 0;
        int digit = 1000;

        while (n >= digit){
            commas = commas + (n - digit + 1);
            digit = digit * 1000;
        }

        return commas;
    }
};