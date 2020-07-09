class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string>st;
        for(int i=0;i<words.size();i++){
            st.insert(morse_code(words[i]));
        }
        return st.size();
    }
    string morse_code(string str){
       string mc[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---","
           .--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
        };
        string res="";
        for(int i=0;i<str.size();i++){
            res=res+mc[str[i]-'a'];
        }
        return res;
    }
};
