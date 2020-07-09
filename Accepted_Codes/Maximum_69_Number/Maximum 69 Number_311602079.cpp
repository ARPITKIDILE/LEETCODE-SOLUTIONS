class Solution {
public:
    int maximum69Number (int num) {
        vector<int>arr;
        while(num){
            arr.push_back(num%10);
            num/=10;
        }
        reverse(arr.begin(),arr.end());
        int len=arr.size(),ans=0;
        for(int i=0;i<len;i++){
            if(arr[i]==6){
                arr[i]=9;
                break;
            }
        }
        reverse(arr.begin(),arr.end());
        int x=1;
        for(int i=0;i<len;i++){
            //cout<<arr[i]<<endl;
            ans+=arr[i]*x;
            x*=10;
        }
        return ans;
    }
};
