class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        ans[n-1] = 1;
        for(int i=n-2;i>=0;i--){
            ans[i]=nums[i+1]*ans[i+1];
        }
        int l=1;
        for(int i=0;i<n;i++){
            ans[i]=l*ans[i];
            l=l*nums[i];
        }
        return ans;
    }
};