class KthLargest {
// member var
private:
    int k_mem;
    vector<int> nums_mem;
    int i=0;
    priority_queue<int, std::vector<int>, std::greater<int>> minH;

public:
    KthLargest(int k, vector<int>& nums) {
        this->k_mem = k;
        this->nums_mem = nums;
    }
    
    int add(int val) {
        nums_mem.push_back(val);
        while(i<nums_mem.size()){
            minH.push(nums_mem[i]);
            i++;
            if(minH.size()>k_mem){
                minH.pop();
            }
        }
        return minH.top();
    }
};
