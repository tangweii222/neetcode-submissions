class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxh;
        for(int i=0; i<stones.size(); i++){
            maxh.push(stones[i]);
        }
        // find x & y
        while(!maxh.empty()){
            int y = maxh.top();
            maxh.pop();
            if(maxh.empty()){
                return y;
            }
            int x = maxh.top();
            maxh.pop();
            if(x==y){
                continue;
            }
            else{
                y = y-x;
                maxh.push(y);
            }
        }
        return 0;
    }
};
