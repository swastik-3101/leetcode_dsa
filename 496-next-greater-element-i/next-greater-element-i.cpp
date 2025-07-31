class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> stk;
        unordered_map<int,int> nge;
        int n = nums2.size();

        for (int i = n - 1; i >= 0; i--) {
            while (!stk.empty() && stk.top() <= nums2[i]) {
                stk.pop();
            }
            nge[nums2[i]] = stk.empty() ? -1 : stk.top();
            stk.push(nums2[i]);
        }

        vector<int> output;
        for (int num : nums1) {
            output.push_back(nge[num]);
        }
        return output;
    }
};
