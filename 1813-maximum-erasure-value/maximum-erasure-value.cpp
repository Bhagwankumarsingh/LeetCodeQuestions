class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int sum=0;
        int ans=INT_MIN;
        unordered_map<int,int>mp;
        while(j<n){
            sum+=nums[j];
            while(mp.find(nums[j])!=mp.end()){
                sum-=nums[i];
                mp.erase(nums[i]);
                i++;
            }
            mp[nums[j]]++;
            ans=max(ans,sum);
            j++;
        }
        return ans;
    }
};