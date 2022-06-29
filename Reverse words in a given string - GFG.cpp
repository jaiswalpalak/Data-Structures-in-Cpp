class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string ans = "";
        stack<string> st;
        for(int i =0; i<S.length();i++){
            string word = "";
            while(S[i] != '.' && i<S.length()){
                word += S[i];
                i++;
            }
            st.push(word+'.');
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        string ansr = "";
        for(int i=0;i<ans.length()-1;i++){
            ansr+=ans[i];
        }
        return ansr;
    } 
};
