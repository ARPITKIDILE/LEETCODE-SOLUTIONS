class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        for(auto i=0;i<prices.size();i++){
            bool flag=0;
            for(auto j=i+1;j<prices.size();j++){
                if(prices[i]>=prices[j]){
                    flag=1;
                    ans.push_back(prices[i]-prices[j]);
                    break;
                }
            }
            if(!flag) ans.push_back(prices[i]);
        }
        return ans;
    }
};
