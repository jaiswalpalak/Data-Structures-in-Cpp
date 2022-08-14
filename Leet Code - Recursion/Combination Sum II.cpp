class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> output;
        int SumTillNow = 0;
        combinationSum2Helper(0, candidates, target, SumTillNow, output);
        return ans;
    }
    
    
    void combinationSum2Helper(int i, vector<int>& candidates, int target, int SumTillNow, vector<int>& output){
        
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
        
        
        //pick
        SumTillNow += candidates[i];
        output.push_back(candidates[i]);
        combinationSum2Helper(i+1, candidates, target, SumTillNow, output);
        SumTillNow -= candidates[i];
        output.pop_back();
        
        //skip
        while(i+1 < candidates.size() && candidates[i+1] == candidates[i]){
            i++;
        }
        combinationSum2Helper(i+1, candidates, target, SumTillNow, output);
        
    }
};
