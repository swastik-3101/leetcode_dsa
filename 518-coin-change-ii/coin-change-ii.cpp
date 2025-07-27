class Solution {
public:
    unsigned long long change(int amount, vector<int>& coins) {
        int m = coins.size();
        vector<vector<unsigned long long>> dp(m, vector<unsigned long long>(amount + 1, 0));
        
        for (int i = 0; i < m; i++) dp[i][0] = 1;
        for (int j = 0; j <= amount; j++) {
            if (j % coins[0] == 0) dp[0][j] = 1;
        }

        for (int i = 1; i < m; i++) {
            for (int j = 1; j <= amount; j++) {
                unsigned long long nottake = dp[i - 1][j];
                unsigned long long take = 0;
                if (coins[i] <= j) take = dp[i][j - coins[i]];
                dp[i][j] = take + nottake;
            }
        }
        return dp[m - 1][amount];
    }
};
