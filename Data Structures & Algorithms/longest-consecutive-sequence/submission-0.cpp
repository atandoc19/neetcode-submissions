class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int temp = 1;
        int result = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]) continue;
            else if (nums[i] == nums[i-1] + 1) temp++;
            else {
                if(temp > result) result = temp;
                temp = 1;
            }
        }
        if(temp > result) result = temp;
        return result;
    }
};
