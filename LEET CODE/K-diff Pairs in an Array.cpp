//O(n)
int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int i: nums){
            map[i]++;
        }
        int ans = 0;
        for(auto it: map){
            if(k ==0){
                if(it.second > 1){
                    ans++;
                }
            }
            else if(map.find(it.first+k) != map.end()){
                ans++;
            }
        }
        return ans;        
    }

