class Solution {
public:
    string losingPlayer(int x, int y) {
        int cnt=0;
       while(x>=1 && y>=4){
        x-=1;
        y-=4;
        cnt++;
       }
      if(cnt%2==1){
        return "Alice";
      }
      else{
        return "Bob";
      }
    }
};