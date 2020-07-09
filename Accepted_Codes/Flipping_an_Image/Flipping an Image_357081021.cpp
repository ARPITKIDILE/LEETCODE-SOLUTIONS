class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(auto& row:A){
            reverse(row.begin(),row.end());
            for(auto& col:row){
                if(col==1) col=0;
                else col=1;
            }
        }
        return A;
    }
};
