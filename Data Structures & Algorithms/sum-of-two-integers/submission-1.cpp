class Solution {
public:
    int getSum(int a, int b) {
        int a_bit;
        int b_bit;
        int carry=0;
        int result=0;
        for(int i=0; i<32; i++)
        {
            a_bit=(a>>i)&1;
            b_bit=(b>>i)&1;
            result|=((a_bit^b_bit^carry)<<i);
            carry= (a_bit & b_bit) | (carry & a_bit) | (carry & b_bit);
        }
        return result;
    }
};
