class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> strings; //key: frequency table. value: strings
        for(auto s : strs){
            vector<int> freq(26, 0); // 26 zeroes
            for(auto c : s){
                freq[c - 'a']++;
            }
            string key = to_string(freq[0]);
            for(int i = 1; i < 26; i++){
                key += ' ' + to_string(freq[i]);
            }
            strings[key].push_back(s);
        }
        vector<vector<string>> result;
        for(auto p : strings){
            result.push_back(p.second);
        }
        return result;
    }
};
