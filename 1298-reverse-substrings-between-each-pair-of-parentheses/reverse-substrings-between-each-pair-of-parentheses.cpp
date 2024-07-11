class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.length();
        stack<int>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                int sta=st.top();
                int e=i;
                reverse(s.begin()+sta,s.begin()+e);
                st.pop();
            }
        }
        string ans="";
       for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]==')') continue;
        else ans+=s[i];
       }
       return ans;
    }
};