class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int five=0;
        int tens=0;
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                five++;
            }
            else if(bills[i]==10){
                if(five==0){
                   return false;
                }
                five--;
                tens++;
            }
            else if(bills[i]==20){
                if(five>=1 && tens>=1){
                    five--;
                    tens--;
                }
                else if(five>=3){
                    five-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};