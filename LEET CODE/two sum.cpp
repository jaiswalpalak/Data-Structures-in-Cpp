// O(n^2)

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i =0; i<nums.size()-1; i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return {};
    }


// O(n) - Using hashmaps

vector<int> twoSum(vector<int>& nums, int target) {
        // creating unorederd map - hashmap
        //Key is the number and value is its index in the vector.
        unordered_map<int,int> m;
        vector<int> ans;
        
        for(int i =0; i<nums.size(); i++){
            //if numfind is found in map, return them
            int numfind = target - nums[i];
            if(m.find(numfind) != m.end()){
                //+1 because indices are NOT zero based
                ans.push_back(m[numfind]);
                ans.push_back(i);
                //number was not found. Put it in the map.
                return ans;
            }
            m[nums[i]] = i;
        }
        return {};
    }
