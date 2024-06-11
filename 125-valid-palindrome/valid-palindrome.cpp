class Solution {
public:
bool isalpha(char c){
    if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')) return true;
    else return false;
}
    bool isPalindrome(string s) {
        string s1="";
        for(int i=0;i<s.length();i++){
            if(!isalpha(s[i])){
                continue;
            }
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=tolower(s[i]);
            }
            s1+=s[i];
        }
        string s2=s1;
        reverse(s2.begin(),s2.end());
        return s2==s1;
    }
};