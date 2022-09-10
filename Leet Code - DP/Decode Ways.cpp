//Recursive Approach
class Solution {
public:
    int numDecodingsHelper(int i, string &s){
        if(i >= s.size()){
            return 1;
        }
        int ans =0;
        int op1 = s[i]-'0', op2=0;
        if(i<s.size()-1){
            op2 = op1*10 + s[i+1]-'0';
        }
        if(op1>0){
            ans+=numDecodingsHelper(i+1, s);
        }
        if(op1>0 && op2>0 && op2<=26){
            ans+=numDecodingsHelper(i+2,s);
        }
        return ans;
    }
    
    
    int numDecodings(string s) {
        return numDecodingsHelper(0,s);    
    }
};

//Memoization
class Solution {
public:
    int numDecodingsHelper(int i, string &s, int* answ){
        if(i >= s.size()){
            return 1;
        }
        if(answ[i] != -1){
            return answ[i];
        }
        int ans =0;
        int op1 = s[i]-'0', op2=0;
        if(i<s.size()-1){
            op2 = op1*10 + s[i+1]-'0';
        }
        if(op1>0){
            ans+=numDecodingsHelper(i+1, s, answ);
        }
        if(op1>0 && op2>0 && op2<=26){
            ans+=numDecodingsHelper(i+2,s, answ);
        }
        return answ[i] = ans;
    }
    
    int numDecodings(string s) {
        int answ[101];
        memset(answ, -1, sizeof answ);
        return numDecodingsHelper(0,s,answ);    
    }
};

//DP
class Solution {
public:   
    int numDecodings(string s) {
        int ans[102];
        memset(ans, 0, sizeof ans);
        int n = s.size();
        ans[n+1] = 1;
        ans[n] = 1;
        for(int i =n; i>=0; i--){
            int op1 = s[i]-'0', op2=0;
            if(i<s.size()-1){
                op2 = op1*10 + s[i+1]-'0';
            }
            if(op1>0){
                ans[i]+=ans[i+1];
            }
            if(op1>0 && op2>0 && op2<=26){
                ans[i]+=ans[i+2];
            }
        }
        return ans[0];
    }
};
