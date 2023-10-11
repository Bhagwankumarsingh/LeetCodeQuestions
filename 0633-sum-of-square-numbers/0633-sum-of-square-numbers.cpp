class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<0) return false;
        long int s=0;
        long int e=sqrt(c);
        while(s<=e){
            if((s*s)+(e*e)==c){
                return true;
            }
            else if((s*s)+(e*e)>c){
                e--;
            }
            else if((s*s)+(e*e)<c){
                s++;
            }
        }
        return false;
    }
};