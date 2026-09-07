class Solution {
public:
    int mod=1e9+7;
    int distinctSubseqII(string s) {
        long ans=0;  
        long curr=0;  
        unordered_map<char, int> mp;
        
        for(int i=0;i<s.size();i++){

            curr = ans + 1;

            if(mp.count(s[i])){
                ans = (ans + curr - mp[s[i]] + mod) % mod;
            }

            else{
                ans = (ans + curr) % mod;
            }
            
            mp[s[i]] = curr; 
        }
        return (int)ans;
    }
};
