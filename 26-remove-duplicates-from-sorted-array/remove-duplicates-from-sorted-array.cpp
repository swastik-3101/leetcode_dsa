class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> uni;
        for( int i =0 ; i<nums.size();i++){
            
            uni.insert(nums[i]);
        }
        int i =0;
        for(int val:uni){
            nums[i]=val;
            i++;
        }
        return uni.size();
        
    }
};