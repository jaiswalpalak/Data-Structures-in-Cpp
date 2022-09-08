// Recursive Approach  T.C. - Exponential
class Solution {
public:
    
    int divisorGameHelper(int n){
        if(n == 1){
            return 0;
        }
        else{
            for(int i =1; i<n; i++){
                if(n%i == 0){
                    if(divisorGameHelper(n-i) == 0){  //if the other person is loosing!!
                        return 1;
                    }
                }
            }
            return 0;
        }
    }
    
    
    bool divisorGame(int n) {
        return divisorGameHelper(n);
    }
};

//Slightly Better - O(n^2)
class Solution {
public:
    int ans[1001]; //1001 because of constraints
    int divisorGameHelper(int n){
        if(n == 1){
            return 0;
        }
        if(ans[n] != -1){
            return ans[n];
        }
        else{
            for(int i =1; i<n; i++){
                if(n%i == 0){
                    if(divisorGameHelper(n-i) == 0){  //if the other person is loosing!!
                        return ans[n] = 1;
                    }
                }
            }
            return ans[n] = 0;
        }
    }
    
    
    bool divisorGame(int n) {
        memset(ans,-1, sizeof ans); //it will initialize whole ans array with -1
        return divisorGameHelper(n);
    }
};



// O(n^3/2)

class Solution {
public:
    int ans[1001]; //1001 because of constraints
    int divisorGameHelper(int n){
        if(n == 1){
            return 0;
        }
        if(ans[n] != -1){
            return ans[n];
        }
        else{
            for(int i =1; i*i<n; i++){
                if(n%i == 0){
                    if(divisorGameHelper(n-i) == 0){  //if the other person is loosing!!
                        return ans[n] = 1;
                    }
                    if(i != 1 && divisorGameHelper(n-i) == 0){  //if the other person is loosing!!
                        return ans[n] = 1;
                    }
                }
            }
            return ans[n] = 0;
        }
    }
    
    
    bool divisorGame(int n) {
        memset(ans,-1, sizeof ans); //it will initialize whole ans array with -1
        return divisorGameHelper(n);
    }
};



//O(1)

class Solution {
public:
    
    
    bool divisorGame(int n) {
        return n%2 == 0;
    }
};

