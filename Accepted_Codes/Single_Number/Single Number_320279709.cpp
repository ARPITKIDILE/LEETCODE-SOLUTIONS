class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int temp=-99;
        sort(nums.begin(),nums.end());
        for(auto i=0;i<nums.size()-1;i=i+2){
            if(nums[i]!=nums[i+1]){
                temp=nums[i];
                break;
            }
        }
        if(temp==-99){
            temp=nums[nums.size()-1];
        }
        return temp;
    }
};
