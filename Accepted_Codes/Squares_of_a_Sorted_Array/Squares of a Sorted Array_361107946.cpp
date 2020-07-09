class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int>arr;
        for(auto i=0;i<A.size();i++){
            arr.push_back(A[i]*A[i]);
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};
