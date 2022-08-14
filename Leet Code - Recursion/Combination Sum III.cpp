class Solution {
public:
    vector<vector<int>> ans;    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> output;
        int SumTillNow = 0;
        combinationSum3Helper(1, k, n, SumTillNow, output);
        return ans;
    }
    
    void combinationSum3Helper(int i, int k, int n, int SumTillNow,vector<int>& output){
        
        if(k ==0 && SumTillNow == n){
            ans.push_back(output);
            return;
        }
        
        if(k < 0){
            return;
        }
        
        if(i == 10) return;
        
        //skip
        combinationSum3Helper(i+1, k, n, SumTillNow, output);
        
        
        //pick
        SumTillNow += i;
        output.push_back(i);
        combinationSum3Helper(i+1, k-1, n, SumTillNow, output);
        SumTillNow -= i;
        output.pop_back();
        
    }
};
