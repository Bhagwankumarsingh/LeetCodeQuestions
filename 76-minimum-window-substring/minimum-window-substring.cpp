class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(auto i:t){
            mp[i]++;
        }
        int i=0;
        int j=0;
        int n=s.size();
        int minL=INT_MAX;
        int si=-1;
        int cnt=0;
        while(j<n){
            if(mp[s[j]]>0){
                cnt++;
            }
            mp[s[j]]--;
            while(cnt==t.length()){
                if(j-i+1<minL){
                    minL=j-i+1;
                    si=i;
                }

                mp[s[i]]++;
                if(mp[s[i]]>0) cnt--;
                i++;
            }
            j++;
        }
        return si==-1?"":s.substr(si,minL);
    }
};