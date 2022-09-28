class Solution {
public:
    bool validPalindrome(string s) {
        int low = 0;
        int high = s.size() - 1;
        return validPalindromeHelper(s, low, high, 0);
    }
    
    bool validPalindromeHelper(string &s, int low, int high, int count){
        if(count >1 ){
            return false;
        }
        while(low<high){
            if(s[low] == s[high]){
                low++; 
                high--;
            }
            else{
                return validPalindromeHelper(s, low+1, high, count+1) || validPalindromeHelper(s, low, high-1, count+1);
            }
        }
        return true;
    }
};
