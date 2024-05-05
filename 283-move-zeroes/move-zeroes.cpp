class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=nums.size();
        int k=0;
        while(k<j){
            if(nums[k]!=0){
                swap(nums[k],nums[i]);
                i++;
            }
        k++;
        }
        
    }
};