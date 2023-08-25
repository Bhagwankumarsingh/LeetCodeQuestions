class Solution {
public:
    bool CanEat(int mid,vector<int>&piles,int h){
        long long ans=0;
        for(auto it:piles){
            int res=it/mid;
            ans+=res;
            if(it%mid!=0) ans++;
        }
        return ans<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int left=1;
        int right=0;
        for(auto it:piles){
            right=max(right,it);
        }
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(CanEat(mid,piles,h)){
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