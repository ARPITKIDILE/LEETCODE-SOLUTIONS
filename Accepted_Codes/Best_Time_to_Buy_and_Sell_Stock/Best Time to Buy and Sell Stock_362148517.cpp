class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxipro=0;
        int miniprice=INT_MAX;
        for(auto i=0;i<prices.size();i++){
            miniprice=min(miniprice,prices[i]);
            maxipro=max(maxipro,prices[i]-miniprice);
        }
        return maxipro;
    }
};
