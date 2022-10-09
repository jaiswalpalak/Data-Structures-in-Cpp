class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int n = s.size();
        char sign = '+';
        for(int i =0; i<n; i++){
            char ch = s[i];
            
            if(isdigit(ch)){
                int val = 0;
                while(i<n && isdigit(s[i])){
                    val = val*10+(s[i]-'0');
                    i++;
                }
                i--;
                if(sign == '+'){
                    st.push(val);
                }
                else if(sign == '-'){
                    st.push(-val);
                }
                else if(sign == '*'){
                    int a = st.top();
                    st.pop();
                    int ans = a*val;
                    st.push(ans);
                }
                else if(sign == '/'){
                    int a = st.top();
                    st.pop();
                    int ans = a/val;
                    st.push(ans);
                }
            }
            else if(ch!= ' '){
                sign = ch;
            }
        }
        
        int sum = 0;
        while(st.size() > 0){
            
            sum+= st.top();
            st.pop();
        }        
        return sum;
    }
};
