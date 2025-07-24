class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        for(int j=0;j<n;j++){
            dp[0][j]=matrix[0][j];
        }
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                int ans=dp[i-1][j];
                if(j!=0){
                    ans=min(ans,dp[i-1][j-1]);
                }
                if(j!=n-1){
                    ans=min(ans,dp[i-1][j+1]);
                }
                dp[i][j]=ans+matrix[i][j];
            }
        }
        int mini=dp[m-1][0];
        for(int j=0;j<n;j++){
            mini = min(mini,dp[m-1][j]);
        }
        return mini;
    }
};