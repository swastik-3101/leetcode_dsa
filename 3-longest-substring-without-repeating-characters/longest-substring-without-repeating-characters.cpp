class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int left=0;
        int maxm=0;
        for(int right=0;right<s.size();right++){
            while(seen.count(s[right])){
               
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            maxm=max(maxm,right-left+1);
        }
        return maxm;
    }
};