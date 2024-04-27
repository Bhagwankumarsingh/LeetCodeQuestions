class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        char ch=grid[1][1];
        int cnt=1;
        if(ch==grid[0][0]){
            cnt++;
        }
         if(ch==grid[0][1]){
            cnt++;
        }
         if(ch==grid[1][0]){
            cnt++;
        }
        if(cnt==1 || cnt>=3){
           return true;
        }

        cnt=1;
        if(ch==grid[0][1]){
            cnt++;
        }
        if(ch==grid[0][2]){
            cnt++;
        }
        if(ch==grid[1][2]){
            cnt++;
        }
        if(cnt==1 || cnt>=3){
            return true;
        }

        cnt=1;
        if(ch==grid[1][0]){
            cnt++;
        }
        if(ch==grid[2][1]){
            cnt++;
        }
        if(ch==grid[2][0]){
            cnt++;
        }
        if(cnt==1 || cnt>=3){
            return true;
        }
        cnt=1;
        if(ch==grid[1][2]){
            cnt++;
        }
        if(ch==grid[2][1]){
            cnt++;
        }
        if(ch==grid[2][2]){
            cnt++;
        }
        if(cnt==1 || cnt>=3){
            return true;
        }
        return false;

    }
};