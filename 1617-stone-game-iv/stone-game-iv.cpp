class Solution {
public:

    vector<int> vec;
    
    bool winnerSquareGame(int n) {
        vec.assign(n+1, -1);
        return solve(n);
    }

    bool solve(int n){
        if(n == 0){
            return false;
        }
        
        if(vec[n] != -1) return vec[n] == 1 ? true : false;

        for(int i =1; (i*i) <= n; i++){
            if(solve(n-(i*i)) == false){
                return vec[n] = true;
            }
        }
        return vec[n] = false;
    }
};