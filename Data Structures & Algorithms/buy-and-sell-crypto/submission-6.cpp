#include <algorithm>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // DP
        int min_buy = prices[0];
        int max_profit = 0;
        for(int i=1;i<prices.size();i++){
            max_profit = std::max(prices[i]-min_buy, max_profit);
            if(prices[i]<min_buy){
                min_buy = prices[i];
            }
        }
        return max_profit;
    }
};
