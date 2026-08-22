class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> hm;
        vector<vector<string>> res;
        int idx=0;

        for(int i=0; i<strs.size(); i++){
            string tmp;
            vector<string> groups;
            tmp = countFreq(strs[i]);

            if(hm.count(tmp)==0){
                groups.push_back(strs[i]);
                res.push_back(groups);
                hm[tmp]= idx;
                idx++;             
            }
            else{
                res[hm[tmp]].push_back(strs[i]);
            }
        }
        return res;
    }

    // 因為unordered_map不能用vector<int>當key 所以要轉乘string
    //vector<int> 
    string countFreq(string str){
        // ascii code去扣
        // a=0x61
        // z=0x7A
        vector<int> freq(26);
        for(int i=0; i<str.size(); i++){
            freq[str[i]-'a']++;
        }
        string freq_s ="";

        for(int i=0; i<26; i++){
            freq_s += to_string(freq[i]);
            freq_s += ','; 
        }
        return freq_s;
    }
};
