class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        int n=hours.size();
        
        unordered_map<int,int>mp;
        long long cnt=0;
        for(int i=0;i<hours.size();i++){
            int remainder=hours[i]%24;

            if(remainder!=0){
                cnt+=mp[24-remainder];
            }
            else{
                cnt+=mp[0];
            }
            mp[remainder]++;
        }
        return cnt;
    }
};