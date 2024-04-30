class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        unordered_map<char,int>smap;
        for(auto it:s1){
            smap[it]++;
        }
        int i=0,j=0;
        unordered_map<char,int>s2map;
        while(j<m){
           s2map[s2[j]]++;
           if(j-i+1==n){
            if(s2map==smap){
                return true;
            }
            s2map[s2[i]]--;
            if(s2map[s2[i]]==0) s2map.erase(s2[i]);
            i++;
           }
           j++;
        }
        return false;
    }
};