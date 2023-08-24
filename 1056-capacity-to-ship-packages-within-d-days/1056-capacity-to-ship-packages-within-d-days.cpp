// in this problem it is not clearly given either it is sorted or not or what we can consider at left and right .

// But here let's suppose the conveyor can ship all the package within X-days then it can also ship all the package in (X+1) days, (X+2) days........and so on -->so here let's Think about binary search


class Solution {
public:
    bool isPossible(int a,int days,vector<int>&weights){
        int cnt=1;
        int sum=0;
        
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(sum>a){
                cnt++;
                sum=weights[i];
            }
        }
        if(cnt<=days) return true;
        else return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int minCapacity=0;
        int maxCapacity=0;
        int ans=0;
        

        for(auto it:weights){
           minCapacity=max(minCapacity,it);
           maxCapacity+=it;
        } 

        while(minCapacity<=maxCapacity){
            int midCapacity=minCapacity+(maxCapacity-minCapacity)/2;
            if(isPossible(midCapacity,days,weights)){
                ans=midCapacity;
                maxCapacity=midCapacity-1;
            }
            else{
                minCapacity=midCapacity+1;
            }
        }
        return ans;
        
    }
};