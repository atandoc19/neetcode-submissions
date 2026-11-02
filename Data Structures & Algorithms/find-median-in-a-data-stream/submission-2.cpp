class MedianFinder {
    priority_queue<int, vector<int>, less<int>> smalls;
    priority_queue<int, vector<int>, greater<int>> bigs;

public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(smalls.empty() || num < smalls.top()) smalls.push(num);
        else if(bigs.empty() || num > bigs.top()) bigs.push(num);
        else smalls.push(num);
        if(smalls.size() > bigs.size() + 1){
            bigs.push(smalls.top());
            smalls.pop();
        }
        if(bigs.size() >= smalls.size() + 1){
            smalls.push(bigs.top());
            bigs.pop();
        }
    }
    
    double findMedian() {
        if(smalls.size() == bigs.size()) return (smalls.top() + bigs.top())/2.0;
        else return smalls.top();
    }
};
