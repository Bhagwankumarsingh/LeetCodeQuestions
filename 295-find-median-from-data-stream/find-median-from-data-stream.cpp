class MedianFinder {
public:
    priority_queue<int,vector<int>,greater<int>>minheap;
    priority_queue<int>maxheap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxheap.empty() && minheap.empty()){
            maxheap.push(num);
        }
        else{
            if(num>maxheap.top()){
                minheap.push(num);
            }
            else{
                maxheap.push(num);
            }
        }
        int n=maxheap.size();
        int m=minheap.size();
        
        //if it is not balanced then first balance it.
        if((n-m==2) || (n-m)==-2){
            if(n>m){
                int ele=maxheap.top();
                maxheap.pop();
                minheap.push(ele);
            }
            else{
                int ele=minheap.top();
                minheap.pop();
                maxheap.push(ele);
            }
        }
    }
    
    double findMedian() {
        int n=maxheap.size();
        int m=minheap.size();
        
       
        if((n+m)%2==0){
            return ((double)(maxheap.top())+(double)(minheap.top()))/2.0;
        }
        else{
            if(n>m) return maxheap.top();
            else return minheap.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */