//Using substr
class Solution {
public:
    string reverseWords(string s) {
        string result;
        int i =0;
        int n = s.length();
        
        while(i<n){
            while(i<n && s[i] == ' '){
                i++;
            }
            if(i>=n){
                break;
            }
            int j = i+1;
            while(j<n && s[j] != ' '){
                j++;
            }
            string sub = s.substr(i,j-i);
            if(result.length() == 0){
                result = sub;
            }
            else{
                result = sub + " " + result;
            }
            i = j + 1; 
        }
        return result;
    }
};



//Using stack
class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string curr="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                curr+=s[i];
            }
            else{
                st.push(curr);
                curr="";
            }
        }
        st.push(curr);
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(!st.empty()){
                ans+=" ";
            }
        }
        return ans;
    }
};
