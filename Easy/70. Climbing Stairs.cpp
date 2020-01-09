class Solution {
public:
    int climbStairs(int n) {
        // dp[n] = dp[n - 1] + dp[n - 2]
        //          1 steps     2 steps

        if (n == 1)
            return 1;
        if (n < 1)
            return 0;
        
        int dp[n];
        dp[0] = 1;
        dp[1] = 2;

        for (auto i = 2; i < n; i++)
            dp[i] = dp[i - 1] + dp[i - 2];

        return dp[n - 1];
    }
};
