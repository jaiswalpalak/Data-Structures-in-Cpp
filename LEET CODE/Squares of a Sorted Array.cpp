//nlogn

vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i = 0; i<nums.size(); i++){
            ans[i] = nums[i]*nums[i];
        }                
        sort(ans.begin(), ans.end());
        return ans;
    }


//n

vector<int> sortedSquares(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int k =nums.size()-1;
        vector<int> ans(nums.size());
        while(start <= end){
            if(abs(nums[start]) > abs(nums[end])){
                ans[k--] = nums[start]*nums[start];
                start++;
            }
            else{
                ans[k--] = nums[end]*nums[end];
                end--;
            }
            
        }
        return ans;
    }
