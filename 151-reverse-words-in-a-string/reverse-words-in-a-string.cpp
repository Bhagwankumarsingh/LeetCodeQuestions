class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int i=0;
        int j=0;
        int currLastInd=0;
        int n=s.length();
        while(j<n){
            while(j<n && s[j]==' '){
                j++;
            }
            int currFInd=i;
            while(j<n && s[j]!=' '){
               s[i]=s[j];
               i++;
               j++;
               currLastInd=i;
            }
            reverse(s.begin()+currFInd,s.begin()+currLastInd);
            s[i]=' ';
            i++;
        }
        s.resize(currLastInd);
        return s;
    }
};