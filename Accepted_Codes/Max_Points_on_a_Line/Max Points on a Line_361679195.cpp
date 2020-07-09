class Solution {
public:
int maxPoints(vector<vector<int>>& points) {
    map<pair<int, int>, int> mp;
    int ans = 0;

    for(int i=0; i<points.size(); i++) {
        mp.clear();
        int same=1, curMax=0;

        for (int j=i+1; j<points.size(); j++) {
            int xdiff=points[i][0]-points[j][0];
            int ydiff=points[i][1]-points[j][1];
            
            if (xdiff==0 && ydiff==0){ //Same points 
                same++;
            }
            else{
                int g = __gcd(xdiff, ydiff);
                mp[{xdiff/g, ydiff/g}]++; 
                curMax = max(curMax, mp[{xdiff/g, ydiff/g}]);
            }
        }
        curMax+=same;
        ans=max(ans, curMax);
    }
    return ans;
}
};
