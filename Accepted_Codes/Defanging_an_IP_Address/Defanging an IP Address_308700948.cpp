class Solution {
public:
    string defangIPaddr(string address) {
        int len=address.length();
        string s="";
        for(int i=0;i<len;i++){
            if(address[i]=='.'){
                s+='[';
                s+='.';
                s+=']';
            }
            else{
                s+=address[i];
            }
        }
        return s;
    }
};
