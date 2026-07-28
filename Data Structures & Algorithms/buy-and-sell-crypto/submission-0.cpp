class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int result = 0;
        for(int i = 0; i < prices.size() - 1; i++){
            if(prices[l] > prices[r]) l = r;
            else result = max(result, prices[r] - prices[l]);
            r++;
        }
        return result;
    }
};
