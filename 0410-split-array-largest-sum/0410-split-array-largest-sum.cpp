class Solution {
public:
    bool canSplit(int mid,vector<int>&nums,int k){
        int sum=0;
        int cnt=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>mid){
                cnt++;
                sum=nums[i];
            }
        }
        if(cnt<=k) return true;
        else return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        for(auto it:nums){
            left=max(left,it);
            right+=it;
        }
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(canSplit(mid,nums,k)){
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