class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return 0;
        }
        unordered_map<char,int> hash;
        for(int i =0;i<s.size();i++){
            hash[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(hash[t[i]]){
                hash[t[i]]--;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
};