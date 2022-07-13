//2 pointers method

vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        if(nums.size()<3){
            return {};
        }
        
        if(nums[0]>0){
            return {};
        }
        
        vector<vector<int>> ans;
        for(int i =0; i<nums.size() ; i++){
            if(nums[i]>0){
                break;
            }
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            int low = i+1;
            int high = nums.size() - 1;
            while(low<high){
                int sum = nums[i]+ nums[low] + nums[high];
                if(sum > 0){
                    high--;
                }
                else if(sum < 0){
                    low++;
                }
                else{
                    
                    //pushing the combo into the ans vector
                    ans.push_back({nums[i], nums[low], nums[high]});
                    int currentLow = nums[low];
                    int currentHigh = nums[high];
                    
                    // we have seen this combo of numbers before; skip
                    while(low< high && nums[low] == currentLow){
                        low++;
                    }
                    while(low< high && nums[high] == currentHigh){
                        high--;
                    }
                }
            }
        }
        return ans;
    }


//Using Hashmaps

vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        if(nums.size()<3){
            return {};
        }
        
        if(nums[0]>0){
            return {};
        }
        unordered_map<int,int> map;
        for(int i =0; i<nums.size();i++){
            map[nums[i]] = i;
        }
        vector<vector<int>> ans;
        for(int i =0; i<nums.size()-2 ; i++){
            if(nums[i]>0){
                break;
            }
            for(int j= i+1; j<nums.size()-1;j++){
                int present = -1*(nums[i]+ nums[j]);
                if(map.count(present) && map.find(present)->second >j){
                    ans.push_back({nums[i], nums[j], present});
                }
                j = map.find(nums[j])->second;
            }
            i = map.find(nums[i])->second;
        }
        
            
        return ans;
    }
