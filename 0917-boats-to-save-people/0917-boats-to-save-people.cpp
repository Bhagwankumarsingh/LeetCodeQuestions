class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        sort(people.begin(),people.end());
        int cnt=0;
        int s=0;
        int e=n-1;
        while(s<=e){
            if(people[e]>=limit || people[s]+people[e]>limit){
                cnt++;
                e--;
            }
            
            else if(people[s]+people[e]<=limit){
                cnt++;
                s++;
                e--;
            }
            else{
                cnt++;
                s++;
            }
        }
        return cnt;
    }
};