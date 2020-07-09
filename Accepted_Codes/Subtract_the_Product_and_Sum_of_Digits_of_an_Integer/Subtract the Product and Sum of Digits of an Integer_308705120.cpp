class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1,sum=0,a,b;
        while(n>0){
            a=n%10;
            product*=a;
            sum+=a;
            n=n/10;
        }
        return product-sum;
    }
};
