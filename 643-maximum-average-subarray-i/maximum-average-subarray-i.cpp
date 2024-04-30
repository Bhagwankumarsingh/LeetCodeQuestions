class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;
        double i=0;
        double j=0;
        double ans=INT_MIN;
        while(j<n){
            sum+=nums[j];
            if(j-i+1==k){
               ans=max(ans,sum/k);

               sum-=nums[i];
               i++;
            }
            j++;
        }
        return ans;
    }
};