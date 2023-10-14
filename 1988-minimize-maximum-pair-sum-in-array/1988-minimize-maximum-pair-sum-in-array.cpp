class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int maxi=INT_MIN;
        sort(nums.begin(),nums.end());
        while(s<e){
            maxi=max((nums[s]+nums[e]),maxi);
            s++;
            e--;
        }
        return maxi;
    }
};