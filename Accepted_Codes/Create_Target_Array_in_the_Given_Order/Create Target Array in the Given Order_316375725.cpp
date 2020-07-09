class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int len=nums.size();
        vector<int>ans;
        for(int i=0;i<len;i++){
            ans.insert(ans.begin()+index[i],nums[i]);
        }
        return ans;
    }
};
