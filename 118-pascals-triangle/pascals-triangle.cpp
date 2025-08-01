class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> output(n,vector<int>(n));
        
        for(int i =0;i<n;i++){
            output[i].resize(i+1);
            output[i][0]=1;
            output[i][i]=1;
        }
        for(int i =2;i<n;i++){
            for(int j=1;j<i;j++){
                output[i][j]=output[i-1][j-1]+output[i-1][j];
            }
        }
        return output;
    }
};