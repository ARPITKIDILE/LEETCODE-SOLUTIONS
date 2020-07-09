class Solution {
public:
    int arrangeCoins(int n) {
        int temp=0,i=1,count=0;
        if(n==1) return 1;
        if(n==0) return 0;
        while(n>=0){
            n-=i;
            count++;
            i++;
        }
        return count-1;
    }
};
