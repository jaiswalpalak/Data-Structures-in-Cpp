class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> output;
        subs(nums,0,output);
        return ans;
    }
    
    void subs(vector<int>& nums, int index, vector<int>& output){
        if(index == nums.size()){
            ans.push_back(output);
            return;
        }
        
        //not pick
        subs(nums, index+1, output);
        
        //pick
        output.push_back(nums[index]);
        subs(nums,index+1, output);
        output.pop_back();
    }
};
