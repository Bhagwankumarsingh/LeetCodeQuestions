class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n=str1.size(),m=str2.size();
        if(str1+str2!=str2+str1){
            return "";
        }
        int gcdL=gcd(n,m);
        return str1.substr(0,gcdL);
    }
};