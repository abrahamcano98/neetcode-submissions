class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int bit=0;
        uint32_t result=0;
        for(int i=0; i<32; i++){
            bit=(n>>i)&1;
            result|=(bit<<(31-i));
        }
        return result;
    }
};
