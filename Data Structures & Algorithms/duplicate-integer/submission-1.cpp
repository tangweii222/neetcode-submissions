#include <unordered_map>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // key:value
        std::unordered_map<int, int> map;
        for(int i=0; i<nums.size(); i++){
            if(map.count(nums[i])==0){
                map[nums[i]]=i;
            }
            else{
                return true;
            }
        }
        return false;
    }
};