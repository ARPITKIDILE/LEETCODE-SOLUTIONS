class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        for(int i=0; i<=31/2; i++)
    {
        if(((n >> i) & 0b1) != ((n >> (31-i)) & 0b1))
        {
            n = n ^ (1L << i | 1L << (31-i));
        }
    }
    
    return n;
    }
};
