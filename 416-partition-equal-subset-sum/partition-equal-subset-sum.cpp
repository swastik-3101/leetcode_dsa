class Solution {
public:
    bool canPartition(vector<int>& nums) {
        if(nums.size()<2){
            return false;
        }
        int s =0;
        for(int a :nums){
            s=s+a;
        }
        if((s&1)!=0) return false;
        int target = s/2;
        int m = nums.size();
        vector<vector<int>> dp(m,vector<int>(target+1,false));
        for(int i =0;i<m;i++){
            dp[i][0]=true;
        }
        if (nums[0] <= target) 
            dp[0][nums[0]] = true;
        for(int i =1;i<m;i++){
            for(int j=1;j<target+1;j++){
                if(nums[i]<=j){
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i]];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[m-1][target];
    }
};