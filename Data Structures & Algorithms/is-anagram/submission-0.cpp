class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> first;
        map<char, int> second;
        for(auto c : s){
            first[c]++;
        }
        for(auto c : t){
            second[c]++;
        }
        return (first == second);
    }
};
