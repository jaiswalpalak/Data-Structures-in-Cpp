int maxProfit(vector<int>& prices) {
        int overallProfit = 0;
        for(int i =1; i<prices.size(); i++){
            if(prices[i] > prices[i-1]){
                overallProfit += prices[i] - prices[i-1];
            }
        }
        return overallProfit;
    }
