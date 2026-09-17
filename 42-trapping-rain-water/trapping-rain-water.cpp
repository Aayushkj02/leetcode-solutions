class Solution {
public:
    int trap(vector<int>& height) {
        int st = 0;
        int end  = height.size()-1;

        int leftMax = 0;
        int rightMax = 0;
        int sum = 0;

        while (st < end) {
            leftMax = max(leftMax, height[st]);
            rightMax =  max(rightMax, height[end]);

            if(leftMax < rightMax){
                sum += leftMax - height[st];
                st++;
            }
            else{
                sum+= rightMax - height[end];
                end--;
            }
        }
        return sum;
    }
};