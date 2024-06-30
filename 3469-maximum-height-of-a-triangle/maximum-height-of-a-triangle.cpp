class Solution {
public:
    int findmaxh(int r,int b,bool sw){
        int height=1;
        while(true){
            if(sw){
                if(r>=height){
                    r-=height;
                    height++;
                } else{
                    break;
                }
            } else{
                if(b >=height){
                    b-=height;
                    height++;
                } else{
                    break;
                }
            }
            sw=!sw;
        }
        return height;
    }
    int maxHeightOfTriangle(int red, int blue) {
        int heightswr=findmaxh(red,blue,true);
        int heightswb=findmaxh(red,blue,false);
        return max(heightswr,heightswb)-1;
    }
};