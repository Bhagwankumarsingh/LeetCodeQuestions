class Solution {
public:
    int helperFunction(vector<int>&nums,int k){
        int i=0;
        int j=0;
        int cnt=0;
        int ans=0;
        while(j<nums.size()){
            if(nums[j]%2!=0){
                cnt++;
            }
            if(cnt>k){
                while(cnt>k){
                    if(nums[i]%2==1) cnt--;
                    i++;
                }
            }
        ans+=(j-i)+1;
        j++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int first = helperFunction(nums,k);
        int second=helperFunction(nums,k-1);
        return first-second;
    }
};