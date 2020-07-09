class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>arr;
        int len=nums.size(),a,b;
        for(int i=0;i<len;i=i+2){
            a=nums[i];
            b=nums[i+1];
            while(a--){
                arr.push_back(b);
            }
        }
        return arr;
    }
};
