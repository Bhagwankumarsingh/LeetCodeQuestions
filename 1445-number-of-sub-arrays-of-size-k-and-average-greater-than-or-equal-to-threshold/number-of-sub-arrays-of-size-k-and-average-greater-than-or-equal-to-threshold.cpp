class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int i=0;
        int j=0;
        int cnt=0;
        int sum=0;
        while(j<n){
            sum+=arr[j];
            if(j-i+1==k){
                int Avg=sum/k;
                if(Avg>=threshold){
                    cnt++;
                }
                sum-=arr[i];
                i++;
            }
            j++;
        }
        return cnt;
    }
};