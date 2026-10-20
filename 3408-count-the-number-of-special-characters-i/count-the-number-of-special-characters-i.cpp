class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;

        unordered_map<char, int> mp;

        for(char c : word)
            mp[c]++;

        for(char ch = 'a'; ch <= 'z'; ch++) {

            if(mp.count(ch)) {

                if(mp.count(ch - 32))
                    count++;
            }
        }

        return count;
    }
};