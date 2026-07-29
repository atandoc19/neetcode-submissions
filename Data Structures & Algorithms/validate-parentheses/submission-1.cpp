class Solution {
public:
    bool isValid(string s) {
        map<char, char> pars = {
            {'{', '}'},
            {'(', ')'},
            {'[', ']'}
        };
    stack<char> res;
    for(auto c : s){
        if(!res.empty() && pars[res.top()] == c) res.pop();
        else {
            res.push(c);
        }
    }
    return res.empty();
    }
};
