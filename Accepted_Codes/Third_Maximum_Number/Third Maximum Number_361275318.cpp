class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>st;
        int len=nums.size();
        for(auto i=0;i<len;i++) st.insert(nums[i]);
        int lena=st.size();
        int i=0;
        for(auto x:st){
            nums[i]=x;
            i++;
        }
        if(lena<3) return nums[lena-1];
        return nums[lena-3];
    }
};
