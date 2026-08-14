class Solution {
private:
    unordered_map<int, int> mem;
public:
    int climbStairs(int n) {
        // base case
        if(n==0){
            return 1;
        }
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        if(mem.count(n)){
            return mem[n];
        }
        mem[n] = climbStairs(n-1)+climbStairs(n-2);

        return climbStairs(n-2)+climbStairs(n-1);
    }
};
