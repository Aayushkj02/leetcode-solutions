class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string res1 = "";
        string res2 = "";

        for(int i=0; i<s.length(); i++)
        {
           if(s[i] == '#'){
            if(res1.size() != 0){
                res1.pop_back();
            }
            continue;
           }
           else{
                res1.push_back(s[i]);
           } 
        }

        for(int i=0; i<t.length(); i++)
        {
           if(t[i] == '#'){
            if(res2.size() != 0){
                res2.pop_back();
            }
            continue;
           }
           else{
                res2.push_back(t[i]);
           }
        }
        return res1 == res2; 
    }
};