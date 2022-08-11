vector<vector<int>> ans;
    vector<vector<int>> permute(vector<int>& nums) {
        permutation(nums,0); 
        return ans;
    }
    
    void permutation(vector<int>& nums, int index){
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i =index; i<nums.size(); i++){
        swap(nums[i], nums[index]);
        permutation(nums, index+1);
        swap(nums[i], nums[index]);
        }
    }
