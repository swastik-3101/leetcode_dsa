class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high =nums.size()-1;
        while(low<high){
            int mid = low+(high-low)/2;
            if(mid%2==1){
                mid--;
            }
            if(nums[mid+1]!=nums[mid]){
                high=mid;
            }
            else{
                low=mid+2;
            }
        }
        return nums[low];
    }
};