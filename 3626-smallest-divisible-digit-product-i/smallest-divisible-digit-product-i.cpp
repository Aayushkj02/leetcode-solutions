class Solution {
public:
    int smallestNumber(int n, int t) {
       while(true){
            int mul = 1;
            int digit = n;

            while(digit > 0){

                mul = mul * (digit % 10);
                digit = digit/10;
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