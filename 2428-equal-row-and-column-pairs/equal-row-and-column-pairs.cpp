class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        map<vector<int>,int>mp;
        int cnt=0;
        for(vector<int>row:grid){
            mp[row]++;
        }
        for(int i=0;i<n;i++){
            vector<int>col;
            for(int j=0;j<m;j++){
                col.push_back(grid[j][i]);
            }
            if(mp.find(col)!=mp.end()){
                cnt+=mp[col];
            }
        }
        return cnt;
    }
};