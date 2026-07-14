class Solution {
public:
    int search(int min, int max, vector<int> &nums){
        int mid = min + (max - min)/2;
        if(nums[min] < nums[max]) return nums[min];
        if(nums[mid] > nums[max]){
            return search(mid + 1, max, nums);
        }
        if(nums[mid] < nums[min]){
            return search(min, mid, nums);
        }
        return nums[mid];
    }
    int findMin(vector<int> &nums) {
        return search(0, nums.size() - 1, nums);
    }
};
