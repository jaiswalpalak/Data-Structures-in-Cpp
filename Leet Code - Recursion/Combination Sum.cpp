class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> output;
        int SumTillNow = 0;
        combinationSumHelper(0, candidates, target, SumTillNow, output);
        return ans;
    }
    
    void combinationSumHelper(int i, vector<int>& candidates, int target, int SumTillNow, vector<int>& output){
        
        if(SumTillNow == target){
            ans.push_back(output);
            return;
        }
        
        if(SumTillNow > target){
            return;
        }
        
        if(i >= candidates.size()){
            return;
        }
        
        
        //skip the ith element
        combinationSumHelper(i+1, candidates, target, SumTillNow, output);
        
        //pick the ith element
        SumTillNow += candidates[i];
        output.push_back(candidates[i]);
        combinationSumHelper(i, candidates, target, SumTillNow, output);
        SumTillNow -= candidates[i]; // Backtracking
        output.pop_back();  // Backtracking
    }
};
