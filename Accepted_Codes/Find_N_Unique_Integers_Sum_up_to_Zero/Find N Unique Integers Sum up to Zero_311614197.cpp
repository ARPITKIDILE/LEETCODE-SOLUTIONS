class Solution {
public:
    vector<int> sumZero(int n) {
        int i=1;
        vector<int>ans;
        if(n%2==0){
            n/=2;
            while(n--){
            ans.push_back(i);
            ans.push_back(-i);
            i++;
            }
        }
        else{
            n--;
            n/=2;
            while(n--){
            ans.push_back(i);
            ans.push_back(-i);
            
            i++;
            }
            ans.push_back(0);
        }
        return ans;
    }
};
