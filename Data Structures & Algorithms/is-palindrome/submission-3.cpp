class Solution {
public:
    bool isPalindrome(string s) {
        // clean
        string s_new;
        for(int i=0;i<s.size();i++){
            if(std::isalnum(s[i])){// 是字母或是數字
                s[i] = std::tolower(s[i]);
                //s_new.append(s[i]);
                s_new += s[i];
            }
        }
        // 2 pointer
        int begin=0;
        int end=s_new.size()-1;
        int l=s_new.size()-1;
        while(s_new[begin]==s_new[end]){
            if((end-begin)<=1){
                return true;
            }
            begin ++;
            end --;

        }
        return false;
    }
};
