//IDK why its wrong

class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       vector<int> ans(n);
       stack<int> st;
       st.push(0);
       ans[0] = 1;
       for(int i = 1; i<n; i++){
          while(!st.empty() && price[st.top()]<price[i]){
              st.pop();
              
          }
          if(st.empty()){
              ans[i] = i+1;
          }
          else{
              ans[i] = i-st.top();
          }
          st.push(i);
       }
       return ans;
    }
};


// All Testcases pased code:
class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       vector<int> v;
      stack<int> s;
      s.push(0);
      v.push_back(1);
      for(int i=1;i<n;i++)
      {
          while(s.empty()==false && price[s.top()]<=price[i])
          {
              s.pop();
          }
          int span=(s.empty())?(i+1):(i-s.top());
          v.push_back(span);
          s.push(i);
      }
      return v;
   }
};
