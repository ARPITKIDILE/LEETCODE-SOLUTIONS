class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>st;
        vector<int>ans,dup,st1;
        int len=nums.size();
        for(auto i=1;i<=len;i++){
            dup.push_back(i);
            st.insert(nums[i-1]);
        }
        for(auto x:st) st1.push_back(x);
        //auto ls=set_intersection(st.begin(),st.end(),dup.begin(),dup.end(),ans.begin());
        for(auto i=0;i<len;i++){
            if(binary_search(st1.begin(),st1.end(),dup[i])) continue;
            else ans.push_back(dup[i]);
        }
        return ans;
    }
};
