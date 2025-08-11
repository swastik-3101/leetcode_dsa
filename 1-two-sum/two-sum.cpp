class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(hash[target-nums[i]] &&hash[target-nums[i]]!=i){
                return {hash[target-nums[i]],i};
            }
        }
        return {-1};
    }
};