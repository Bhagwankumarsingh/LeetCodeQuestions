class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        while(!pq.empty() && k>0){
            pair<int,int>t=pq.top();
            ans.push_back(t.second);
            pq.pop();
            k--;
        }
        return ans;
    }
};