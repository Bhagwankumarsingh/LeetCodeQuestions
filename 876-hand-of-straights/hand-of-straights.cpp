class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0){
            return false;
        }
        unordered_map<int,int>mp;
        for(auto it:hand){
            mp[it]++;
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto i:mp){
            pq.push(i.first);
        }
        while(!pq.empty()){
            int t=pq.top();
            for(int i=0;i<groupSize;i++){
                int s=t+i;
                if(mp[s]==0){
                    return false;
                }
                mp[s]--;
                if(mp[s]==0){
                    pq.pop();
                }
            }
        }
        return true;
    }
};