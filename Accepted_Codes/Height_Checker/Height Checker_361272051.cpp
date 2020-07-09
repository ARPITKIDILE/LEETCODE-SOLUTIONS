class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>arr=heights;
        sort(arr.begin(),arr.end());
        int count=0;
        for(auto i=0;i<arr.size();i++){
            if(arr[i]!=heights[i]) count++;
        }
        return count;
    }
};
