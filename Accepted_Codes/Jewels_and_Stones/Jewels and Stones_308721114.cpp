class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int ans=0,len1=J.length(),len2=S.length();
        for(int i=0;i<len1;i++){
            for(int j=0;j<len2;j++){
                if(J[i]==S[j]){
                    ans++;
                }
            }
        }
        return ans;
    }
};
