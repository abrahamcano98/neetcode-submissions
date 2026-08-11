class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int max_profit = 0;

        int i = 0;
        int j = 1;

        while (j < n)
        {
            int buy = prices[i];
            int sell = prices[j];

            int profit = sell - buy;

            if (profit > 0)
            {
                max_profit = max(max_profit, profit);
            }
            else
            {
                i = j;
            }

            j++;
        }

        return max_profit;
    }
};