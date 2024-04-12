class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]<target){
                ans=mid+1;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
};