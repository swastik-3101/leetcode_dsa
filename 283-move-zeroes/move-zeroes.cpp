class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n =nums.size()-1;
        for(int i =n;i>=0;i--){
            if(nums[i]==0){
                for(int j =i+1;j<=n;j++){
                    swap(nums[j-1],nums[j]);
                }
            }
        }
        
    }
};