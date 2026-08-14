class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // HASH MAP
        std::unordered_map<int, int> pairs;
        int diff;
        for(int i=0;i<nums.size();i++){
            diff = target - nums[i];
            if(pairs.find(nums[i])== pairs.end()){
                pairs[diff] = i;
            }
            else{
                return {pairs[nums[i]],i};
            }
        }
        return {};
    }
};
