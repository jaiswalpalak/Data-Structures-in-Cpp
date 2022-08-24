//Bruteforce O(n^3)
//Select every subarray and return the subarray with the maximum sum

//O(n) Using Kadane's Algorithm 

nt maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = INT_MIN;
        for(int i =0; i<nums.size(); i++){
            sum += nums[i];
            maxSum = max(maxSum, sum);
            if(sum <0){
                sum = 0;
            }
        }
        return maxSum;
    }
