class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int len=A.size();
        len/=2;
        for(int i=0;i<2*len;i++){
            if(count(A.begin(),A.end(),A[i])==len){
                return A[i];
            }
        }
        return 0;
    }
};
