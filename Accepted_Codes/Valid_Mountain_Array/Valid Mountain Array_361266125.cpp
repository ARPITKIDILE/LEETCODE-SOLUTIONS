class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size() <= 2) return false;
        int i = 0;
        for(i=1; i < A.size(); i++)
        {
            if(A[i] <= A[i-1])
                break;
        }
        if((i == A.size()) || (i == 1)) return false;
        
        for(; i < A.size(); i++)
        {
            if(A[i] >= A[i-1])
            {
                return false;
            }
        }
        return true;
    }
};
