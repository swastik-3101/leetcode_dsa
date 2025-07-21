class Solution {
public:
    bool check(string s){
        for(int i =2;i<s.size();i++){
            if(s[i]==s[i-1]&&s[i]==s[i-2]){
                return true;
            }
        }
        return false;
    }
    string makeFancyString(string s) {
        while(check(s)==true){
        for(int i =2;i<s.size();i++){
            if(s[i]==s[i-1]&&s[i]==s[i-2]){
                s.erase(i,1);
            }
        }
        }
        return s;
    }
};