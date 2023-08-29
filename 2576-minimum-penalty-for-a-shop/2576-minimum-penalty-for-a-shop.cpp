#include<bits/stdc++.h>
class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.length();
        int maxi=0;
        int ans=0;
        pair<int,int>p={0,0};
        //p.make_pair(0,0);
        for(int i=0;i<n;i++){
            if(customers[i]=='Y'){
                p.first++;
                p.second=i+1;
            }
            else{
                p.first--;
                p.second=i;
            }
            if(p.first>maxi){
            
             ans=p.second;
            }
            
            maxi=max(maxi,p.first);
        }
        return ans;
    }
};