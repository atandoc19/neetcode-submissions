class Solution {
public:
    int binary_help(int start, int end, std::vector<int>& nums, int target){
        int mid = start + (end - start) / 2;

        if(nums[start] > target || nums[end] < target) return -1;
        std::cout << mid << " " << nums[mid];
        if(nums[mid] < target){
            return binary_help(mid + 1, end, nums, target);
        }
        if(nums[mid] > target){
            return binary_help(start, mid - 1, nums, target);
        }
        return mid;
    }
    int search(vector<int>& nums, int target) {
        return binary_help(0, nums.size() - 1, nums, target);
    }
};
