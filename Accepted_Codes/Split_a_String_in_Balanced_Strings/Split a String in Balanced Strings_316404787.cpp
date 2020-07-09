class Solution {
public:
    int balancedStringSplit(string s) {
        int len=s.length(),count=0,bal=0;
        for(int i=0;i<len;i++){
            count=0;
            for(int j=i;j<len;j++){
               if(s[j]=='R'){
                   count++;
               }
               else{
                   count--;
               }
               if(j-i>0&&count==0){
                  bal++;
                  i=j;
                  break;
               }
            }
        }
        return bal;
    }
};
