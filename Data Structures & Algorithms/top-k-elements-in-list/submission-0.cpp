class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq; // [element, frequency]
        for(auto num : nums){
            freq[num]++;
        }
        vector<vector<int>> freq2(nums.size() + 1);
        for(auto p : freq){
            freq2[p.second].push_back(p.first);
        }
        vector<int> result;
        for(int i = freq2.size() - 1; result.size() < k; i--){
            for (auto n : freq2[i]){
                result.push_back(n);
            }
        }
        return result;
    }
};
