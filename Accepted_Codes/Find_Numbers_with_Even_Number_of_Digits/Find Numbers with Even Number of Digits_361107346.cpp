class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int len=nums.size(),count=0;
        for(int i=0;i<len;i++){
            int n=nums[i];
            int temp=(floor(log10(n) + 1));
            if(temp%2==0){
                count++;
            }
        }
        return count;
    }
};
