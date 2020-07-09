class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int len=nums.size(),count;
        vector<int>dup(len);
        for(int i=0;i<len;i++){
            count=0;
            for(int j=0;j<len;j++){
                if(nums[i]>nums[j]){
                    count++;
                }
            }
            dup[i]=count;
        }
        return dup;
    }
};
