class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        permutation(nums,0);
        return ans;
    }
    
    void permutation(vector<int>& nums, int index){
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }
        
        unordered_set<int> mp;
        
        for(int i =index; i<nums.size(); i++){
            if(mp.find(nums[i])!= mp.end()){
                continue; // found the element so going to the next iteration 
            }
            mp.insert(nums[i]);
            swap(nums[i], nums[index]);
            permutation(nums,index+1);
            swap(nums[i], nums[index]);
        }
    }
};
