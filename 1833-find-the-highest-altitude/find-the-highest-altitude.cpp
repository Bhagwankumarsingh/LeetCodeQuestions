class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=INT_MIN;
        int sum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            ans=max(ans,sum);
        }
        return ans>0?ans:0;
    }
};