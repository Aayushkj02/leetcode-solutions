class Solution { 
public: 
    bool isPalindrome(int x) { 
        
        vector<int> x_vector;
        
        if (x < 0) return false; 
        
        while (x > 0) {
            x_vector.push_back(x % 10);
            x /= 10;
        }
        vector<int> ans; 
        int n = x_vector.size(); 
        
        for(int i = n - 1; i >= 0; i--) { 
            ans.push_back(x_vector[i]); 
        } 
        
        return x_vector == ans; 
    } 
};
