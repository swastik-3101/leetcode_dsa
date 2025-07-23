class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mymap;
        for(int i =0;i<nums.size();i++){
            mymap[nums[i]]++;

        }
        for(int a : nums){
            if(mymap[a]==1){
                return a;
            }
        }
        return -1;
    }
};