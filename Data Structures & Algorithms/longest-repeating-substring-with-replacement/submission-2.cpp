class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        map<char, int> seen;
        int t = 0;
        int freq = 0;
        int res = 0;
        for(int r = 0; r < s.size(); r++){
            seen[s[r]]++;
            if(freq < seen[s[r]]) freq = seen[s[r]];
            while((r - l - freq + 1) > k){
                seen[s[l]]--;
                l++;
            }
            res = max(res, r - l + 1);
        }
        return res;
    }
};
