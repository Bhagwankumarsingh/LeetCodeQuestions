class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int n=nums.size();
        int cntZ=0;
        int ans=INT_MIN;
        while(j<n){
           if(nums[j]==0){
            cntZ++;
           }
           while(cntZ>k){
            if(nums[i]==0){
                cntZ--;
            }
            i++;
           }
           ans=max(ans,j-i+1);
           j++;
        }
        
        return ans;
    }
};