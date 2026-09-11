class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            // 要進位的和
            int carry = (a&b)<<1;
            // 非進位的和
            a ^= b;
            b =carry;
        }
        return a;
    }
};
