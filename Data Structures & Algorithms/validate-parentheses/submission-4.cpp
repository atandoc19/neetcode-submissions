class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
        for(auto c : s){
            if(c == '{' || c == '[' || c == '(') par.push(c);
            else if(par.empty()) return false;
            if(c == '}'){
                if(par.top() == '{') par.pop();
                else return false;
            }
            else if(c == ']'){
                if(par.top() == '[') par.pop();
                else return false;
            }
            else if(c == ')'){
                if(par.top() == '(') par.pop();
                else return false;
            }
        }
        return par.empty();
    }
};
