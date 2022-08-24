class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sz = prices.size();
        int minPrice = prices[0];
        int maxBenefit = 0;
        for(int i=0;i<sz;i++){
            minPrice=min(prices[i],minPrice);
            maxBenefit=max(prices[i]-minPrice,maxBenefit);
        }
        return maxBenefit;
    }
};