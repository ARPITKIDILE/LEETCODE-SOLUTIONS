class Solution {
public:
    int reverse(int x) {
        long long int num=x,rem,rev=0;
        while(num!=0)
        {
            rem=num%10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && rem > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && rem < -8)) return 0;
            rev=rev*10+rem;
            num=num/10;
        }
        //cout<<rev<<endl;
        return rev;
    }
};
