class Solution {
public:
    int findPivot(vector<int>&nums){
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(i!=0 && nums[i]<nums[i-1]){
                ans=i;
            }
        }
        return ans;
    }
    int firstPart(vector<int>&nums,int target){
        int n=nums.size();
        int s=0;
        int e=findPivot(nums);
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else {
                e=mid-1;
            }
        }
      return -1;
    }
    int sPart(vector<int>&nums,int target){
         int n=nums.size();
        int s=findPivot(nums);
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else {
                e=mid-1;
            }
        }
      return -1;
    }
    int search(vector<int>& nums, int target) {
        int f=firstPart(nums,target);
        int s=sPart(nums,target);
        if(f==-1){
            return s;
        }
        else{
            return f;
        }
    }
};