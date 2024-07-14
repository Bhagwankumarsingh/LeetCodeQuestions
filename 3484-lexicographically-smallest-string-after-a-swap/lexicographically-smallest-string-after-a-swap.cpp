class Solution {
public:
    string getSmallestString(string s) {
        int n=s.size();
        for(int i=1;i<n;i++){
            if(s[i]%2==0 && s[i-1]%2==0 && s[i]<s[i-1]){
                swap(s[i],s[i-1]);
                break;
            }
            else if(s[i]%2!=0 && s[i-1]%2!=0 && s[i]<s[i-1]){
                swap(s[i],s[i-1]);
                break;
            }
        }
        return s;
    }
};