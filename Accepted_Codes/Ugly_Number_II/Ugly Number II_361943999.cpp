class Solution {
public:
    // bool isUgly(int num) {
    //     if(num<=INT_MIN||num>=INT_MAX) return false;
    //     if(num<=0) return false;
    //     while(num%2==0) num/=2;
    //     while(num%3==0) num/=3;
    //     while(num%5==0) num/=5;
    //     if(num==1||num==-1) return true;
    //     return false;
    // }
    
    int nthUglyNumber(int n) {
        vector<int>arr;
        arr.push_back(1);
        // //int count=1,temp=2;
        // if(n==1) return 1;
        // while(count<n){
        //     if(isUgly(temp)) count++;
        //     if(count==n) return temp;
        //     temp++;
        // }
        // return temp;
        int a=0,b=0,c=0;
        int two=2,three=3,five=5;
        int mini=1;
        for(auto i=1;i<n;i++){
            mini=min(two,min(three,five));
            arr.push_back(mini);
            if(mini==two){
                a++;
                two=arr[a]*2;
            }
            if(mini==three){
                b++;
                three=arr[b]*3;
            }
            if(mini==five){
                c++;
                five=arr[c]*5;
            }
        }
        //for(auto i=0;i<arr.size();i++)cout<<arr[i]<<" ";
        return mini;
    }
};
