class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> output(n);
    stack<int> stk;
    int count=0;
    for(int i=n-1;i>=0;i--){
        while(!stk.empty() && temperatures[i]>=temperatures[stk.top()]){
            stk.pop();
            count++;
        }
        output[i]= stk.empty()?0:stk.top()-i;
        stk.push(i);
    }
    return output;  
    }
};