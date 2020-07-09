class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0,ana=0,aba=grid.size();
        for (auto row = grid.begin(); row != grid.end(); row++) {
    for (auto col = row->begin(); col != row->end(); col++) {
        if(*col<0){
            count++;
        }
    }
}
        //cout<<"ana "<<ana<<endl;
        return count;
    }
};
