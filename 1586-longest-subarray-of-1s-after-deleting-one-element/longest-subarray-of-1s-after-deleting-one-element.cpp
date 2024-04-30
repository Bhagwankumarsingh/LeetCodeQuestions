class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int cntZ=0;
        int ans=0;
        while(j<n){
            if(nums[j]==0) cntZ++;
            while(cntZ>1){
                if(nums[i]==0){
                    cntZ--;
                }
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans-1;
    }
};