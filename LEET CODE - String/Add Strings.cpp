class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string res = "";
        while(i>=0 || j>=0 || carry){
            int sum = 0;
            if(i>=0){
                sum+=(num1[i] - '0');
                i--;
            }
            if(j>=0){
                sum+=(num2[j] - '0');
                j--;
            }
            sum+=carry;
            carry = sum/10;      //  11/10 = 1; used to find the carry for the next digit.
            sum = sum % 10;      // 11%1; used to find the last digit to add in the res string.
            res = res + to_string(sum);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};



//https://leetcode.com/problems/add-strings/discuss/380772/Easy-to-understand-C%2B%2B-Solution-0ms
