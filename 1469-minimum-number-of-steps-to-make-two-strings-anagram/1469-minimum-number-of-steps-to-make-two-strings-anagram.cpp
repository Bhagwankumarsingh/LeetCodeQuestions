class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp;

        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int ans=0;
        for(int i=0;i<t.length();i++){
            if(mp.find(t[i])==mp.end()){
                ans++;
            }
            else{
                mp[t[i]]--;
                if(!mp[t[i]]){
                    mp.erase(t[i]);
                }
            }
        }
        
        return ans;
    }
};