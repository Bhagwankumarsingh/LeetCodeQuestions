class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int cnt=0;
        for(auto it:mp){
            cnt+=it.second%2==0 ? 2:1;
        }
        return cnt;
    }
};