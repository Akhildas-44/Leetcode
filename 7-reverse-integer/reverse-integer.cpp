class Solution {
public:
    int reverse(long long x) {
        long long OriginalX=x;
        long long rev=0;
         x=std::abs(OriginalX);
        while(x>0)
        {
            int rem=x%10;
            rev=(10*rev)+rem;
            x=x/10;
        }
        if(rev<INT_MIN||rev>INT_MAX)
        {
            return 0;
        }
        if(OriginalX<0)
        {
            return -rev;
        
        }
        else
        {
            return rev;
        }
    }
};