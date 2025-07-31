class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> stk;
        
        int n = nums.size();
        vector<int> nge(n);

        for (int i = 2*n - 1; i >= 0; i--) {
            while (!stk.empty() && stk.top() <= nums[i%n]) {
                stk.pop();
            }
            if(i<n){
                nge[i] = stk.empty() ? -1 : stk.top();
            }
            stk.push(nums[i%n]);
        }

        
        
        return nge;
    }
};