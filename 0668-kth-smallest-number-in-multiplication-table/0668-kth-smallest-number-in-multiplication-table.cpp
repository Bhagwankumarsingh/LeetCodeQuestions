class Solution {
public:
    bool cntK(int mid,int m,int n,int k){
        int count=0;
        for(int i=1;i<=m;i++){
           count+=min(n,mid/i);
        }
        return count>=k;
    }
    int findKthNumber(int m, int n, int k) {
        int left=1;
        int right=m*n;
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(cntK(mid,m,n,k)){
                ans=mid;
                 right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
};