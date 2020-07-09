class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        N%=14;
        if(N==0){
            N=14;
        }
        int temp=N/14;
        vector<int>ndx,ddx;
        int dup=N,count=0;
        while(N--){
            count++;
            
            for(auto i=1;i<cells.size()-1;i++){
                //cout<<ce
                if(cells[i-1]==cells[i+1]&&cells[i]!=1){
                    //cout<<"aaya "<<i<<" "<<cells[i]<<endl;
                    //cells[i]=1;
                    ndx.push_back(i);
                    //cout<<"gaya "<<i<<" "<<cells[i]<<endl;                    
                    //i++;
                }
                else if(cells[i-1]!=cells[i+1]) ddx.push_back(i);

            }
            
            for(auto i=0;i<ndx.size();i++){
                cells[ndx[i]]=1;
            }
            for(auto i=0;i<ddx.size();i++){
                cells[ddx[i]]=0;
            }
            if(count==1){
                cells[0]=0;
                cells[cells.size()-1]=0;
            }
            ndx.clear();
            ddx.clear();
            //cout<<"--"<<endl;
        }
        // if(dup>0){
        //     cells[0]=0;
        //     cells[cells.size()-1]=0;
        // }
        return cells;
    }
};
