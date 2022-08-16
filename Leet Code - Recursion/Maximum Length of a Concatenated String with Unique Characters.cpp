class Solution {
public:
    
    
    
    int maxLength(vector<string>& arr) {
        vector<int> selected(26,0);
        return maxLengthHelper(0, selected, arr, 0);
    }
    
    bool Compare(vector<int>& selected, string& currString){
        vector<int> selfCheck(26, 0);
        for(int i =0; i<currString.size(); i++){
            if(selfCheck[currString[i] - 'a'] == 1){
                return false;
            }
            selfCheck[currString[i] - 'a'] = 1;
        }
        
        for(int i=0; i<currString.size(); i++){
            if(selected[currString[i] - 'a'] == 1){
                return false;
            }
        }
        return true;
    }
                 
                 
    int maxLengthHelper(int i, vector<int>& selected, vector<string>& arr, int len){
        if(i == arr.size()){
            return len;
        }
        
        string currString = arr[i];
        if(Compare(selected, currString) == false){
            return maxLengthHelper(i+1, selected, arr, len);
        }else{
            
            //pick
            for(int j =0; j<currString.size(); j++){
                selected[currString[j] - 'a'] = 1;
            }
            len += currString.size();
            int op1 =  maxLengthHelper(i+1, selected, arr, len);
            
            
            //skip
            for(int j =0; j<currString.size(); j++){
                selected[currString[j] - 'a'] = 0;
            }
            len -= currString.size();
            int op2 =  maxLengthHelper(i+1, selected, arr, len);
            
            
            return max(op1,op2);
        }
    }
    
    
};
