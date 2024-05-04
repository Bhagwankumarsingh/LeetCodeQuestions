class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int mi=max(n,m);
        string ans="";
        for(int i=0;i<mi;i++){
            if(n){
               ans+=word1[i];
               n--;
            }
            if(m){
                ans+=word2[i];
                m--;
            }
        }
        return ans;
    }
};