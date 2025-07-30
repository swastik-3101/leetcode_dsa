class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }

        unordered_map<char,char> hashst;
        unordered_map<char,char> hashts;

        for(int i =0;i<s.size();i++){
            char c1=s[i];
            char c2=t[i];
            if(hashst.count(c1)){
                if(hashst[c1]!=c2){
                    return false;
                }
            }
            else{
                hashst[c1]=c2;
            }

            if(hashts.count(c2)){
                if(hashts[c2]!=c1){
                    return false;
                }
            }
            else{
                hashts[c2]=c1;
            }
        }
        return true;
    }
};