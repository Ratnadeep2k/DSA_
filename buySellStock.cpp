int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int maxiProfit =0;
    int mini = prices[0];
    int cost =0;
    for(int i=1;i<prices.size();i++){
        cost = prices[i]- mini;
        maxiProfit = max(maxiProfit,cost);
        mini = min(mini,prices[i]);
    }
    return maxiProfit;
}
