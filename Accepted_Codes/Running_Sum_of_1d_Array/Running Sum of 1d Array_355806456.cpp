class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        ans.push_back(nums[0]);
        int len=nums.size();
        len--;
        int ndx=1;
        while(len--){
            ans.push_back(nums[ndx]+ans[ndx-1]);
            ndx++;
        }
        return ans;
    }
};
