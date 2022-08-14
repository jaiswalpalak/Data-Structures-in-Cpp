class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> output;
        subs(nums,0,output);
        //sort(nums.begin(), nums.end());
        return ans;
    }
    
    void subs(vector<int>& nums, int index, vector<int>& output){
        if(index == nums.size()){
            ans.push_back(output);
            return;
        }
        
        //pick
        output.push_back(nums[index]);
        subs(nums,index+1, output);
        output.pop_back();
        
        //not pick
        while(index+1 < nums.size() && nums[index+1] == nums[index]){
            index++;
        }
        subs(nums, index+1, output);
        
        
    }
};
