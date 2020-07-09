class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int>even,odd;
        int len=A.size();
        for(int i=0;i<len;i++){
            if(A[i]&1){
                odd.push_back(A[i]);
            }
            else{
                even.push_back(A[i]);
            }
        }
        int len1=odd.size();
        for(int i=0;i<len1;i++){
            even.push_back(odd[i]);
        }
        return even;
    }
};
