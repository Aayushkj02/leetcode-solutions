class Solution {
public:
    double myPow(double x, int n) {
        double result = 1.0;
        long long power = n;

        if(power<0)
        {
            x = 1/x;
            power = -power;
        }

        while(power>0)
        {
            if(power % 2 == 1) 
            {
            result = result*x;
            }

            x = x*x;
            power = power/2;
        }
        return result;
    }
};