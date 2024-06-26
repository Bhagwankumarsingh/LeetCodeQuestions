class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        int i=0;
        int j=0;
        int cnt=0;
        while(j<n){
            mp[s[j]]++;
            while(mp['a'] && mp['b'] && mp['c']){
                cnt+=((n-1)-j)+1;
                mp[s[i]]--;
                i++;
            }
            j++;
        }
        return cnt;
    }
};