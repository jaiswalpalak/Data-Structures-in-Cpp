// Brute Force Approach - O(n^2)

int numPairsDivisibleBy60(vector<int>& time) {
        int ans = 0;
        for(int i =0; i<time.size() -1; i++){
            for(int j = i+1; j<time.size(); j++){
                if((time[i] + time[j]) % 60 == 0){
                    ans++;
                }
            }
        }
        return ans;
    }



//O(n)
int count = 0;
        vector<int> rem(60,0);
        for(int i =0; i<time.size(); i++){
            int a = time[i]%60;
            if(a == 0){
                count += rem[a];
            }
            else{
                count += rem[60-a];
            }
            rem[a]++;
        }
        return count;
    }
