class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // brute force
        int profit=0;
        int pre=0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                profit = prices[j]-prices[i];
                if(profit>pre){
                    pre = profit;
                }
            }
        }
        return pre;
    }
};
