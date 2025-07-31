class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> myset;
        unordered_set<int> prev;
        for(int a:arr){
            unordered_set<int> curr;
            curr.insert(a);
            for(int x:prev){
                curr.insert(x|a);
            }
            for(int x:curr){
                myset.insert(x);
            }
            prev=curr;
        }
        return myset.size();
    }
};