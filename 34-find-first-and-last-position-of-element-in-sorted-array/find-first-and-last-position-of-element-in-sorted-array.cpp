class Solution {
public:
    int firstOcc(vector<int>&nums,int target){
        int n=nums.size();
        int s=0;
        int e=n-1;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else {
                e=mid-1;
            }
        }
        return ans;
    }
    int lastOcc(vector<int>&nums,int target){
        int n=nums.size();
        int s=0;
        int e=n-1;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else {
                e=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans1=firstOcc(nums,target);
        int ans2=lastOcc(nums,target);

        return {ans1,ans2};
    }
};