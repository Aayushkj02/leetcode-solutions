class Solution {
public:
    int smallestNumber(int n, int t) {
       while(true){
            int mul = 1;
            int num = n;

            while(num > 0){
                mul = mul * (num % 10);
                num = num/10;
            }

            if(mul % t == 0){
                return n;
            }

            else{
                n++;
            }
       }
    }
};