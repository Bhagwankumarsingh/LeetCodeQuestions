class Solution {
public:
    int mod=1000000007;
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int s=0;
        int e=n-1;
        int ans=0;
        vector<int>pow2(n);
        pow2[0]=1;
        for(int i=1;i<n;i++){
            pow2[i]=(pow2[i-1]*2)%mod;
        }
        while(s<=e){
            if(nums[s]+nums[e]<=target){
                int len=e-s;
                ans=(ans+pow2[len])%mod;
                s++;
            }
            else{
               e--;
            }
        }
        return ans;
    }
};