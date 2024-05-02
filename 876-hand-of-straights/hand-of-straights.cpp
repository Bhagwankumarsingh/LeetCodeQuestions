class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0) return false;

        unordered_map<int,int>count;
        for(auto it:hand){
            count[it]++;
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto i:count){
            pq.push(i.first);
        }
        while(!pq.empty()){
            int start = pq.top();
            // Attempt to form a group starting from the smallest element in pq
            for (int i = 0; i < groupSize; i++) {
                int card = start + i;
                if (count[card] == 0) {
                    return false; // If there's any card missing in the sequence, fail
                }
                
                count[card]--;
                if (count[card] == 0) {
                    pq.pop(); // Only pop when we use up a card count to avoid messing up the loop
                    // if (card != pq.top()) return false; // Check sync between count and priority queue
                }
            }

        }
        return true;
    }
};