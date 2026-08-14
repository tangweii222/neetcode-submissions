class Solution {
public:
    bool isValid(string s) {
        // stack(FILO)
        // std:stack
        // push(), pop(), empty()
        std::unordered_map<char, char> pairs;
        pairs[')'] = '(';
        pairs[']'] = '[';
        pairs['}'] = '{';
        std::stack<char> c;
        for(int i=0;i<s.size();i++){
            if((s[i] == '(') || (s[i] == '[' ) || (s[i] == '{')){
                c.push(s[i]);
            }
            else{
                if(!c.empty()){
                    if(pairs[s[i]]!=c.top()){
                        return false;
                    }
                    else{
                        c.pop();
                    }
                }
                else{
                    return false;
                }
            }
        }
        // if(c.empty()) {
        //     return true;
        // }
        // else{
        //     return false;
        // }
        return c.empty();
    }
};
