class Solution {
public:
    string frequencySort(string s){
        vector<pair<int, char>> vec (123);

        for(char &ch : s){
            int freq = vec[ch].first;
            vec[ch] = {freq + 1, ch};
        }

        auto compare = [&](pair<int, char> &p1, pair<int, char> &p2){
            return p1.first > p2.first;
        };

        sort(begin(vec), end(vec), compare);
        string result = "";

        for(int i=0; i<123; i++){
            if(vec[i].first > 0){
                int freq = vec[i].first;
                char ch = vec[i].second;
                string temp = string(freq, ch);
                result = result + temp;
            }
        }
        return result;
    }
};