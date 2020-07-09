class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int arr[n][m],a,b,count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j]=0;
            }
        }
        for(int i=0;i<indices.size();i++){ 
            for(int j=0;j<indices[i].size();j++){
                if(j==0){
                    a=indices[i][j];
                }
                else{
                    b=indices[i][j];
                }
            }
            for(int i1=0;i1<n;i1++){
                arr[i1][b]++;
            }
            for(int j1=0;j1<m;j1++){
                arr[a][j1]++;
            }

        } 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]%2!=0){
                    count++;
                }
            }
        }
        //cout<<count<<endl;
        return count;
    }
};
