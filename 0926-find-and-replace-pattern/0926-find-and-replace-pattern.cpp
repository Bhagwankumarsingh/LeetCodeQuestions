class Solution {
public:
    vector<int>numeric(string pattern){
        if(pattern.size()==0) return {};

        vector<int>v;
        int ind=0;
        unordered_map<char,int>mp;
        for(int i=0;i<pattern.size();i++){
            if(mp.find(pattern[i])==mp.end()){
                mp.insert({pattern[i],ind++});
                v.push_back(mp[pattern[i]]);
            }
            else{
                v.push_back(mp[pattern[i]]);
            }
        }
        return v;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<int>ans=numeric(pattern);
        int n=words.size();
        vector<string>res;
        for(int i=0;i<n;i++){
            vector<int>p=numeric(words[i]);
            if(p==ans){
                res.push_back(words[i]);
            }
        }
        return res;
    }
};