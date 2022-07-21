vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for(int i =0; i<nums.size(); i++){
            long target3 = (long)target - (long)nums[i];
            for(int j =i+1; j<nums.size(); j++){
                long target2 = (long)target3 - (long)nums[j];
                int low = j+1;
                int high = nums.size() - 1;
                while(low<high){
                    int two_sum = nums[low] + nums[high];
                    if(two_sum < target2){
                        low++;
                    }
                    else if(two_sum > target2){
                        high--;
                    }
                    else{
                        vector<int> curr(4,0);
                        curr[0]  = (nums[i]);
                        curr[1] = (nums[j]);
                        curr[2] = (nums[low]);
                        curr[3] = (nums[high]);
                        ans.push_back(curr);
                        
                        
                        //this is for removing the duplicates
                        while(low< high && nums[low] == curr[2]){
                            low++;
                        }
                        while(low<high && nums[high] == curr[3]){
                            high--;
                        }
                    }
                }
                while(j+1 < nums.size() && nums[j+1] == nums[j]){
                    j++;
                }                
            }
            while(i+1 < nums.size() && nums[i+1] == nums[i]){
                i++;
            }
        }
        return ans;
    }
