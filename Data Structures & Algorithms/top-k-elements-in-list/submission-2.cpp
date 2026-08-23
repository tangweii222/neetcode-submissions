class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // hash map
        // key: num
        // val: times
        unordered_map<int, int> hm;
        for(int num : nums){
            hm[num]+=1;
        }
        
        // min heap
        // priority_queue
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minh;
        for(auto& pairs : hm){
            minh.push({pairs.second, pairs.first});
            if(minh.size()>k){
                minh.pop();
            }
        }

        vector<int> res;
        for(int i=0; i<k; i++){
            res.push_back(minh.top().second);
            minh.pop();
        }
        return res;
    }
};
