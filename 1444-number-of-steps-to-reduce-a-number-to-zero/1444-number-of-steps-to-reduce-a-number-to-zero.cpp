class Solution {
public:
    int helper(int n,int steps){
        if(n==0) return steps;

        if(n%2==0){
            return helper(n/2,steps+1);
        }
        else{
            return helper(n-1,steps+1);
        }
    }
    int numberOfSteps(int num) {
        int cnt=0;
        return helper(num,cnt);
    }
};