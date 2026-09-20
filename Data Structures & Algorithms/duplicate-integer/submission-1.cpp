class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> search;
        for(auto num : nums){
            search[num]++;
            if(search[num] == 2) return true;
        }
        return false;
    }
};