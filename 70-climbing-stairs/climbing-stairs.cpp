class Solution {
public:

    int helperRec(int n, vector<int>& dp) {

        if (n == 1)
            return 1;

        if (n == 2)
            return 2;

        if (dp[n] != -1)
            return dp[n];

        dp[n] = helperRec(n - 1, dp) + helperRec(n - 2, dp);

        return dp[n];
    }

    int climbStairs(int n) {

        vector<int> dp(n + 1, -1);

        return helperRec(n, dp);
    }
};