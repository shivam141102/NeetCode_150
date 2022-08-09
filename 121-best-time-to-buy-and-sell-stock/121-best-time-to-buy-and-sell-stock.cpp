class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum=prices[0];
        int ans=0;
        for(int i=0;i<prices.size();i++){
            int minimum=min(minimum,prices[i]);
            if(prices[i]>minimum)
                ans=max(ans,prices[i]-minimum);
        }
        return ans;
    }
};