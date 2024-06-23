class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double ans=0;
        sort(nums.begin(),nums.end());
        double mini=9999;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            double avg=(nums[i]+nums[j])/(2*1.0);
            mini=min(mini,avg);
            i++;
            j--;
        }
        return mini;
    }
};