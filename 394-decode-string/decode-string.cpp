class Solution {
public:
    string decodeString(string s) {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]!=']'){
                st.push(s[i]);
            }
            else{
                string currstr="";
                while(st.top()!='['){
                    currstr=st.top()+currstr;
                    st.pop();
                }
                st.pop();
                string number="";
                while(!st.empty () && isdigit(st.top())){
                    number=st.top()+number;
                    st.pop();
                }
                int ktime=stoi(number);
                while(ktime--){
                    for(int p=0;p<currstr.size();p++){
                        st.push(currstr[p]);
                    }
                }
            }
        }
            s="";
            while(!st.empty()){
                s=st.top()+s;
                st.pop();
            }
        
        return s;
    }
};