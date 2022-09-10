//memoization
class Solution {
public:
    
    int ans[301];
    
    int wordBreakHelper(int i, string s, set<string> &wordDict){
        if(i == s.size()){
            return 1;
        }
        if(ans[i] != -1){
            return ans[i];
        }
        
        string temp;
        for(int j = i; j<s.size(); j++){
            temp += s[j];
            if(wordDict.find(temp) != wordDict.end()){
                if(wordBreakHelper(j+1,s,wordDict)){
                    return ans[i]=1;
                }
            }
        }
        return ans[i]=0;
    }
    
    
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> st;
        memset(ans, -1, sizeof ans);
        for(auto a: wordDict){
            st.insert(a);
        }
        return wordBreakHelper(0,s,st);
    }
};


//DP
