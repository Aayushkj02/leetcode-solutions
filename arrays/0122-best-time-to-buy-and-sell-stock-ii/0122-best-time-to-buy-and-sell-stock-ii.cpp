class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int total_Profit = 0;

        for(int i=1; i<prices.size(); i++)
        {
            if(prices[i] > prices[i-1])
            {
                total_Profit = total_Profit + prices[i] - prices[i-1];
            }

        }
        return total_Profit;
    }
};