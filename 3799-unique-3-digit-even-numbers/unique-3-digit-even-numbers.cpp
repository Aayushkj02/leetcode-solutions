#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        unordered_set<int> set;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                for(int k = j + 1; k < n; k++){

                    int d1 = digits[i] * 100 + digits[j] * 10 + digits[k];
                    int d2 = digits[i] * 100 + digits[k] * 10 + digits[j];
                    int d3 = digits[j] * 100 + digits[i] * 10 + digits[k];
                    int d4 = digits[j] * 100 + digits[k] * 10 + digits[i];
                    int d5 = digits[k] * 100 + digits[i] * 10 + digits[j];
                    int d6 = digits[k] * 100 + digits[j] * 10 + digits[i];

                    if(digits[i] != 0 && d1 % 2 == 0) set.insert(d1);
                    if(digits[i] != 0 && d2 % 2 == 0) set.insert(d2);
                    if(digits[j] != 0 && d3 % 2 == 0) set.insert(d3);
                    if(digits[j] != 0 && d4 % 2 == 0) set.insert(d4);
                    if(digits[k] != 0 && d5 % 2 == 0) set.insert(d5);
                    if(digits[k] != 0 && d6 % 2 == 0) set.insert(d6);
                }
            }
        }

        return set.size();
    }
};
