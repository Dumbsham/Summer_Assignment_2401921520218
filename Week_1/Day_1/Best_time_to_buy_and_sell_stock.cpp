class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_p = INT_MIN;
        int left = 0;
        for(int right = 0;right < prices.size();right++){
            int profit = prices[right]-prices[left];
            if(profit < 0){
                left = right;
            }
            max_p = max(profit,max_p);
        }
        return max_p;
    }
};