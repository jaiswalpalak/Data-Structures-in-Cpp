// Time Complexity: O(nlogn)
//Using Sorting
vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for(int i =0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }


//Time Complexity: O(N)
//Using Hashmaps
vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> map;
        for(int no : nums){
            map[no]++;
        }
        
        for(auto it: map){
            if(it.second == 2){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
