class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<int>> mp;
        for(int i =0; i<strs.size(); i++){
            auto s= strs[i];
            sort(s.begin(), s.end());
            mp[s].push_back(i);
        }
        for(auto a:mp){
            vector<string> v;
            for(auto b:a.second){
                v.push_back(strs[b]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
