class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();
        int maxProduct = nums[0];
        int product = 1;

        // Left Traversal
        for(int i=0; i<n; i++){
            product *= nums[i];
            maxProduct = max(product, maxProduct);
            
            if(product == 0) product = 1;
        }

        product = 1;

        //Right Traversal
        for(int i = n-1; i>=0; i--){
            product *= nums[i];
            maxProduct = max(product, maxProduct);
            if(product == 0) product = 1;
        }

        return maxProduct;

    }
};