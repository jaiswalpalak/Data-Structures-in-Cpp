class Solution {
  public:
    int checkRedundancy(string s) {
        stack<char> st;
        int i =0;
        int count = 0;
        while(s[i] != '\0'){
            while(s[i] != ')'){
                st.push(s[i]);
                i++;
            }
            if(s[i] == ')'){
                if(st.empty()){
                    return 0;
                }
                while(st.top() !='('){
                    st.pop();
                    count++;
                }
                if(count == 0 || count == 1){
                    return 1;
                }
                else{
                    st.pop();
                    count = 0;
                }
            }
            i++;
        }
        return 0;
    }
};
