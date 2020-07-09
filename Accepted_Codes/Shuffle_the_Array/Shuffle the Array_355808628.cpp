class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>naya,ans;
        for(auto i=n;i<2*n;i++){
            naya.push_back(nums[i]);
        }
        for(auto i=0;i<n;i++){
            ans.push_back(nums[i]);
            ans.push_back(naya[i]);
        }
        return ans;
    }
};
