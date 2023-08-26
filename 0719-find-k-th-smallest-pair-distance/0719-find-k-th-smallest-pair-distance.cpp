class Solution {
public:
    bool countPair(int mid,vector<int>&nums,int k){
        sort(nums.begin(),nums.end());
        int cnt=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            while(j<nums.size() && nums[j]-nums[i]<=mid){
                j++;
            }
            cnt+=(j-i)-1;
        }
        return cnt>=k;
    }
    int smallestDistancePair(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        sort(nums.begin(),nums.end());
        int right=nums[n-1]-nums[0];
        int ans=-1;

        while(left<=right){
            int mid=left+(right-left)/2;
            if(countPair(mid,nums,k)){
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