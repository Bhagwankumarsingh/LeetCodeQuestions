class Solution {
public:
    bool isPossible(int mid,vector<int>&nums,int threshold){
        
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%mid==0){
                sum+=nums[i]/mid;
            }
            else{
                sum+=(nums[i]/mid)+1;
            }
        }
        return sum<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left=1;
        int right=INT_MIN;
        for(auto it:nums){
            
            right=max(right,it);
        }
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(isPossible(mid,nums,threshold)){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
};