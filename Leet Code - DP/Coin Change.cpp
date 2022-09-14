//Here we will take or notTake the coin

//Recursion - TC: exponential
class Solution {
public:
    
    int coinChangeHelper(int index, int amount, vector<int> &coins){
        if(index ==0){
            if(amount%coins[0] == 0){
                return amount/coins[0];
            }
            return 1e9;
        }
        
        int notTake = 0 + coinChangeHelper(index-1, amount, coins);
        int take = INT_MAX;
        if(coins[index] <= amount){
            take = 1 + coinChangeHelper(index,amount - coins[index], coins);
        }
        return min(take,notTake);
    }
    
    
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int ans = coinChangeHelper(n-1, amount, coins);
        if(ans >= 1e9){
            return -1;
        }
        return ans;
    }
};


//Memoisation - TC: O(N*Target)
class Solution {
public:
    
    int coinChangeHelper(int index, int amount, vector<int> &coins, vector<vector<int>> &dp){
        if(index ==0){
            if(amount%coins[0] == 0){
                return amount/coins[0];
            }
            return 1e9;
        }
        if(dp[index][amount] != -1){
            return dp[index][amount];
        }
        
        int notTake = 0 + coinChangeHelper(index-1, amount, coins,dp);
        int take = INT_MAX;
        if(coins[index] <= amount){
            take = 1 + coinChangeHelper(index,amount - coins[index], coins,dp);
        }
        return dp[index][amount] = min(take,notTake);
    }
    
    
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, -1));
        int ans = coinChangeHelper(n-1, amount, coins, dp);
        if(ans >= 1e9){
            return -1;
        }
        return ans;
    }
};

//DP
class Solution {
public:
        
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, 0));
        
        //Base Case
        for(int T =0; T<=amount; T++){
            if(T%coins[0] == 0){
                dp[0][T] = T/coins[0];
            }
            else{
                dp[0][T] = 1e9;
            }
        }
        
        
        for(int index = 1; index<n; index++){
            for(int T= 0; T<=amount; T++){
                
                int notTake = 0 + dp[index-1][T];
                int take = INT_MAX;
                if(coins[index] <= T){
                    take = 1 + dp[index][T - coins[index]];
                }
                dp[index][T] = min(take,notTake);
            }
        }
         
        
        int ans = dp[n-1][amount];
        if(ans >= 1e9){
            return -1;
        }
        return ans;
    }
};

//You can also space optimise it more
//watch this = https://www.youtube.com/watch?v=myPeWb3Y68A
