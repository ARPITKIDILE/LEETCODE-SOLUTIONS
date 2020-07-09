class Solution {
public:
    bool checkRecord(string s) {
        int count=0;
        for(auto i=0;i<s.length();i++){
            if(s[i]=='A') count++;
            if(count>1) return false;
        }
        if(s.find("LLL")!= std::string::npos)  return false;
        return true;
    }
};
