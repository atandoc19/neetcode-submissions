class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);
        for(int i = 1; i < nums.size(); i++){ //prefix
            result[i] = result[i-1] * nums[i-1];
        } 
        int postfix = 1;
        for(int i = nums.size() - 1; i >= 0; i--){ //postfix
            result[i] *= postfix;
            postfix *= nums[i];
        } 

        return result;
    }
};
