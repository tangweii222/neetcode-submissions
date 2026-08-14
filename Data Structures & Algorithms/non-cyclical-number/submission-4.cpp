class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> mem;
        int r=0;
        int tmp=0;

        while(n!=1){
            // digits add
            r=0;
            for(int i=0;i<4;i++){
                tmp = n%10;
                r += tmp*tmp;
                if(n>1){
                    n=n/10;
                }
                else{
                    break;
                }
            }
            n=r;
            if(mem.count(r)== 0){
                mem[r]=n;
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
