int maxProfit(vector<int>& prices) {
        int leastvalue = INT_MAX;
        int overallprofit = 0;
        int profitnow = 0;
        for(int i =0; i<prices.size(); i++){
            if(prices[i] < leastvalue){
                leastvalue = prices[i];
            }
            profitnow = prices[i] - leastvalue;
            if(overallprofit< profitnow){
                overallprofit = profitnow;
            }
        }
        return overallprofit;
}
