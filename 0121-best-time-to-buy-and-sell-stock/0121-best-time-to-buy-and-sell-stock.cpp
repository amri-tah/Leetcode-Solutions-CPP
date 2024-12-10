class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof = 0;
        int buy = 0;
        int sell = 0;
        while (buy<=sell && sell<prices.size()){
            maxprof = max(maxprof, prices[sell]-prices[buy]);
            if (prices[buy]>prices[sell]){
                buy++;
                sell=buy;
            } 
            else sell++;
        }
        return maxprof;
    }
};