class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        for(int i = 0; i < intervals.size(); i++){
            int start = newInterval[0];
            int end = newInterval[1];
            if(intervals[i][1] < start){
                result.push_back(intervals[i]);
            } 
            else if(intervals[i][0] > end){
                result.push_back(newInterval);
                for(int j = i; j < intervals.size(); j++){
                    result.push_back(intervals[j]);
                }
                return result;
            }
            else{
                newInterval = {min(start, intervals[i][0]), max(end, intervals[i][1])};
            }
        }
        result.push_back(newInterval);
        return result;
    }
};
