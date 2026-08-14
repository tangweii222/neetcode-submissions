class Solution {
private:
    unordered_map<int, int> r;
public:
    int minCostClimbingStairs(vector<int>& cost) {
        r[1]=0;
        int tmp;
        for(int i=2; i<cost.size()+1; i++){
            r[i] = min(r[i-1]+cost[i-1],r[i-2]+cost[i-2]);
        }
        return r[cost.size()];
    }
};
