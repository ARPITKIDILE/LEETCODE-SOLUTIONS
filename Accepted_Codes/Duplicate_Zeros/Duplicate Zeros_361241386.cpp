class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>brr;
        int len=arr.size();
        for(auto i=0;i<len;i++){
            if(arr[i]==0) brr.push_back(0);
            brr.push_back(arr[i]);
        }
        for(auto i=0;i<len;i++){
            arr[i]=brr[i];
        }
    }
};
