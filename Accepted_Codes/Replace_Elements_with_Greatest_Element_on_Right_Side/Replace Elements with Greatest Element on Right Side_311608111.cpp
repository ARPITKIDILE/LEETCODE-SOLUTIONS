class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int len=arr.size();
        for(int i=0;i<len-1;i++){
            int maxi=-99;
            for(int j=i+1;j<len;j++){
                if(arr[j]>maxi){
                    maxi=arr[j];
                }
            }
                //cout<<"--"<<maxi<<"***"<<arr[i]<<endl;
                arr[i]=maxi;
        }
        arr[len-1]=-1;
        return arr;
    }
};
