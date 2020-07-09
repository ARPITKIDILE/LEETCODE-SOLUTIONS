class Solution {
public:
    bool divisorGame(int N) {
        int dp[N+1];
        for(auto i=0;i<=N;i++) dp[i]=0;
        for(auto i=1;i<=N;i++){
            for(auto j=1;j<i;j++){
                if(i%j==0&&dp[i-j]==0){
                    dp[i]=1;
                    break;
                }
            }
        }
        return dp[N];
    }
};
