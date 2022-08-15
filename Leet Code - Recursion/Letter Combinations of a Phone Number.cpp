class Solution {
public:
    
    void letterCombinationsHelper(int i, string &digits, vector<string> &ans, string &temp, unordered_map<char, string> &mp){
        
        if(i == digits.size()){
            ans.push_back(temp);
            return;
        }
        
        string str = mp[digits[i]];
        for(int j = 0; j<str.size(); j++){
            temp.push_back(str[j]);
            letterCombinationsHelper(i+1, digits, ans, temp, mp);
            temp.pop_back();            
        }
    }
    
    
    
    
    vector<string> letterCombinations(string digits) {
        
        unordered_map<char, string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        
        vector<string> ans;
        string temp;
        if(digits.size() == 0){
            return ans;
        }
        letterCombinationsHelper(0, digits, ans,  temp, mp);
        return ans;
        
    }
};
