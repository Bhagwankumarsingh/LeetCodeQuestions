class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int i=0;
        int j=0;
        int ans=INT_MIN;
        string subString="";
        int cnt=0;
        while(j<n){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                cnt++;
            }
            subString+=s[j];
            if(j-i+1==k){
                ans=max(ans,cnt);
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                    cnt--;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};