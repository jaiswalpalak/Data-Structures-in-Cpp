// O(n^2)

int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int ans = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            sum = nums[i];
            if(sum == k){
                ans++;
            }
            for(int j = i+1; j<n; j++){
                sum += nums[j];
                if(sum == k){
                    ans++;
                }
            }
        }
        return ans;
    }
    
    
    //O(n) -- using Hashmaps
    
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        int prefixSum[n];
        prefixSum[0] = nums[0];
        for(int i=1; i<n ;i++){
            prefixSum[i] = nums[i] + prefixSum[i-1];
        }
        unordered_map<int,int> map;
        for(int i=0; i<n; i++){
            if(prefixSum[i] == k){
                ans++;
            }
            if(map.find(prefixSum[i] - k) != map.end()){
                ans += map[prefixSum[i] - k];
            }
            map[prefixSum[i]]++;
        }
        return ans;        
    }
