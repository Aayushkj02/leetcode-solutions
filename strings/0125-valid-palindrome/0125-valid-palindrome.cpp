class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        
        for(char c:s){
            if(isalnum(c) && c!=' '){
                cleaned += tolower(c);
            }
        }
        
        int l = 0;
        int r = cleaned.size()-1;

        while(l<r){
            if(cleaned[l] != cleaned[r]){
                return false;
                break;
            }
            l++;
            r--;
        }
        return true;   
    }
};