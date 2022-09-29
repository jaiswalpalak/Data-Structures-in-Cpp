class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        
        for(int i =0; i<= m-n; i++){
            int j = 0;
            for(; j<n; j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
            }
            if(j == n){
                return i;
            }
        }
        return -1;
    }
};

//for KMP algorithm approach follow this : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/discuss/12956/C%2B%2B-Brute-Force-and-KMP
