class Solution {
public:
    int recur(int n,vector<int>& dp){
        if(n==0 || n==1){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]=recur(n-1,dp)+recur(n-2,dp);
        return dp[n];
    }

    int climbStairs(int n) {
        vector<int>  dp(n+1,-1);
        return recur(n,dp); 
        
    }
};