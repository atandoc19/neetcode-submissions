class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result = 0;
        int l = 0;
        int r = heights.size() - 1;

        while(l < r){
            int w = r - l;
            int h = min(heights[l], heights[r]);
            result = max(result, h*w);
            if(heights[l] <= heights[r]) l++;
            else r--;
        }
        return result;
    }
};
