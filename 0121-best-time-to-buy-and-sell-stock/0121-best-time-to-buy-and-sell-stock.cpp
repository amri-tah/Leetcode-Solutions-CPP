class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof = 0;
        int buy = 0;
        int sell = 1;
        while (buy<=sell && sell<prices.size()){
            if (prices[buy]>prices[sell]) buy=sell;
            else maxprof = max(maxprof, prices[sell]-prices[buy]);
            sell++;
        }
        return maxprof;
    }
};