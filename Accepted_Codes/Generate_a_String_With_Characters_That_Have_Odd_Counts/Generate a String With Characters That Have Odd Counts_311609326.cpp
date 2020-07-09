class Solution {
public:
    string generateTheString(int n) {
        char s1='a';
        char s2='b';
        string ans="";
        if(n%2==0){
            n-=1;
            while(n--){
                ans+=s1;
            }
            ans+=s2;
        }
        else{
            while(n--){
                ans+=s1;
            }
        }
        return ans;
    }
};
