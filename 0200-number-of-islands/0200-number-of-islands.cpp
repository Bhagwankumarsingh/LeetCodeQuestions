class Solution {
public:
    void bfs(int r,int c,vector<vector<int>>&vis,vector<vector<char>>&grid){
        vis[r][c]=1;
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        q.push({r,c});
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();

            for(int delr=-1;delr<=1;delr++){
                for(int delc=-1;delc<=1;delc++){
                    if(abs(delr)==abs(delc)){
                        continue;
                        }
                    int nrow=row+delr;
                    int ncol=col+delc;

                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                        vis[nrow][ncol]=1;
                        q.push({nrow,ncol});
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;

        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(!vis[row][col] && grid[row][col]=='1'){
                    cnt++;
                    bfs(row,col,vis,grid);
                }
            }
        }
        return cnt;
    }
};