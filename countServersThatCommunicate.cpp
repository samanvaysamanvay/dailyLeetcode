class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> rows(grid.size(),0),cols(grid[0].size(),0);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                rows[i]+=grid[i][j];
                cols[j]+=grid[i][j];
            }
        }
        for(int i=0;i<rows.size();i++) cout<<rows[i]<<"\t";
        cout<<endl;
        for(int i=0;i<cols.size();i++) cout<<cols[i]<<"\t";      
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1 && (rows[i]>1 || cols[j]>1)) ans++;
            }
        }
        return ans;
    }
};