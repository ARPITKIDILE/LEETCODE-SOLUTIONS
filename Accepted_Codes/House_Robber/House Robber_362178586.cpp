class Solution {
public:
    int rob(vector<int>& nums) {
        // int sum1=0,sum2=0;
        // for(int i=0;i<nums.size();i++){
        //     if(i&1) sum1+=nums[i];
        //     else sum2+=nums[i];
        // }
        // return max(sum1,sum2);
int n = nums.size();
        
        if (n == 0) {
            return 0;
        }
        
        vector<int> take(n);
        vector<int> skip(n);
        
        take[0] = nums[0];
        skip[0] = 0;
        
        for (int i = 1; i < n; ++i) {
            take[i] = skip[i - 1] + nums[i];
            skip[i] = max(take[i - 1], skip[i - 1]);
        }
        
        return max(take[n - 1], skip[n - 1]);
    }
};
