class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>lsum(n);
        vector<int>rsum(n);
        lsum[0]=0;
        int sum=0;
        for(int i=1;i<n;i++){
            sum+=nums[i-1];
            lsum[i]=sum;
        }
        rsum[n-1]=0;
        sum=0;
        for(int i=n-2;i>=0;i--){
            sum+=nums[i+1];
            rsum[i]=sum;
        }
        for(int i=0;i<n;i++){
            if(lsum[i]==rsum[i]){
                return i;
            }
        }
        return -1;
    }
};