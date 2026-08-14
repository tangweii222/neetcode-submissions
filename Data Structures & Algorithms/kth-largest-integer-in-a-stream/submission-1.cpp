class KthLargest {
private:
    int k;
    vector<int> nums;
public:
    KthLargest(int k, vector<int>& nums) {
        // sort(nums.begin(), nums.end()); //要給排序範圍
        this->k=k;
        this->nums=nums;
    }
    
    int add(int val) {
        nums.push_back(val);
        sort(nums.begin(), nums.end());

        queue<int> q;
        for(int i=nums.size()-k;i<nums.size();i++){
            q.push(nums[i]);
        }
        return q.front();
    }
};
