class Solution {
public:
    bool isPalindrome(int i, int j, string &s){
      while(i<j){
        if(s[i] != s[j]){
          return false;
        }
        i++;
        j--;
      }

      return true;
    }
    int partition(string &s, int idx, int memo[]) {
      if(idx == s.length()){
        return -1;
      }

      if(memo[idx] != -1){
        return memo[idx];
      }

      int ans = INT_MAX;
        for(int i=idx; i<s.length(); i++){
          if(isPalindrome(idx,i,s)){
             int result = 1 + partition(s,i+1, memo);
             ans = min(ans,result);
          }
        }

        return memo[idx] = ans;
    }
    int minCut(string s) {
      int memo[s.length()];
      for(int i=0; i<s.length(); i++){
        memo[i] = -1;
      }
       return partition(s,0,memo); 
    }
};

