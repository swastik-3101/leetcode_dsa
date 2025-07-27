class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        const int INF = 1e9;
        int m = coins.size();
        vector<vector<int>> dp(m,vector<int>(amount+1,INF));
        for(int i=0;i<m;i++){
            dp[i][0]=0;
        }
        for(int j=0;j<amount+1;j++){
            if(j%coins[0]==0){
                dp[0][j]=j/coins[0];
            }
        }
        for( int i =1;i<m;i++){
            for(int j=1;j<amount+1;j++){
                int nottake= dp[i-1][j];
                int take =INF;
                if(coins[i]<=j) take=1+dp[i][j-coins[i]];
                dp[i][j]=min(take,nottake);
            }
        }
        int ans=dp[m-1][amount];
        return (ans>=INF ?-1:ans);
    }
};