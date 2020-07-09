class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int>map;
        bool flag=0;
        string temp;
        for(int i = 0; i < paths.size(); i++){
            map[paths[i][0]]++;
        }
        
        for(int i = 0; i < paths.size(); i++){
            if(!map.count(paths[i][1])){
                return paths[i][1];
            }
        }
        return "ss";
    }
};
