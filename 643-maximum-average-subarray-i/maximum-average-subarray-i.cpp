class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int n=nums.size();
        int j=0;
        int i=0;
        double sum=0;
        double ans=-9999;
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