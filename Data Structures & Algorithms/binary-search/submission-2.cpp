class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(target == nums[m]){
                return m;
            }
            else if(target>nums[m]){
                // 右半
                l = m+1;
            }
            else{
                // 左半
                r = m-1;
            }
        }
        return -1;
    }
};
