class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> sdic;
        for(int i=0; i<s.size();i++){
            if(sdic.count(s[i])==0){
                sdic[s[i]]=1;
            }
            else{
                sdic[s[i]]+=1;
            }
        }

        for(int i=0; i<t.size();i++){
            if(sdic.count(t[i])==0){
                return false;
            }
            else{
                sdic[t[i]]-=1;
                if(sdic[t[i]]==0){
                    sdic.erase(t[i]);
                }
            }
        }

        if(sdic.empty())return true;
        else return false;
    }
};
