class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // HASH MAP
        std::unordered_map<int, int> pairs;
        int diff;
        for(int i;i<nums.size();i++){
            diff = target - nums[i];
            if(pairs.count(nums[i])==0){
                pairs[diff] = i;
            }
            else{
                int idx0 = i;
                int idx1 = pairs[nums[i]];
                return {idx1,idx0};
            }
        }
    }
};
