class Solution {
public:
    int helperFunction(vector<int>&nums,int k){
        int n=nums.size();
        int i=0;
        int j=0;
        int cnt=0;
        unordered_map<int,int>mp;
        while(j<n){
           mp[nums[j]]++;
           while(mp.size()>k){
              mp[nums[i]]--;
              if(mp[nums[i]]==0){
                mp.erase(nums[i]);
              }
              i++;
           }
           cnt+=j-i+1;
           j++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helperFunction(nums,k)-helperFunction(nums,k-1);
    }
};