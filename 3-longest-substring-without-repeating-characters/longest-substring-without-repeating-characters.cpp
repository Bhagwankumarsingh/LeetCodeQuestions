class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int i=0;
        int j=0;
        int ans=0;
        unordered_map<char,int>mp;
        while(j<n){
            mp[s[j]]++;
            int k=j-i+1;
            if(mp.size()==k){
                ans=max(ans,k);
                j++;
            }
            else{
                while(mp.size()<k){
                    mp[s[i]]--;
                    if(mp[s[i]]==0){
                        mp.erase(s[i]);
                    }
                    i++;
                    k=j-i+1;
                }
                if(mp.size()==k){
                    ans=max(ans,k);
                }
                j++;
            }
        }
        return ans;
    }
};