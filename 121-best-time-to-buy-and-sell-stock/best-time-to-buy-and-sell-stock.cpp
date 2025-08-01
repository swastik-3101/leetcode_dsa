class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0;
        int right=1;
        int maxm=0;
        int n = prices.size();
        while(right<n){
            if(prices[right]>prices[left]){
                maxm= max(maxm,prices[right]-prices[left]);
            }
            else{
                left=right;
            }
            right++;
        }
        return maxm;
    }
};