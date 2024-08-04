class Solution {
public:
    int checkforrow(vector<vector<int>>&grid,int n,int m){
        int cnt=0;
        for(int i=0;i<n;i++){
            int s=0;
            int e=m-1;
            while(s<=e){
                if(grid[i][s]!=grid[i][e]){
                    cnt++;
                    s++;
                    e--;
                }
                else{
                    s++;
                    e--;
                }
            }
        }
        return cnt;
    }
    int checkforcol(vector<vector<int>>&grid,int n,int m){
        int cnt=0;
        for(int i=0;i<m;i++){
            int s=0;
            int e=n-1;
            while(s<=e){
                if(grid[s][i]!=grid[e][i]){
                    cnt++;
                    s++;
                    e--;
                }
                else{
                    s++;
                    e--;
                }
            }
        }
        return cnt;
    }
    int minFlips(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        int countrow=checkforrow(grid,n,m);
        int countcol=checkforcol(grid,n,m);
        return min(countrow,countcol);
    }
};