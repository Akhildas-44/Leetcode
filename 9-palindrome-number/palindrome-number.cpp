class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        long long OriginalX=x;
        if(x<0)
        {
            return false;
        }
        while(x>0)
        {
          int rem=x%10;
          rev=(10*rev)+rem;
          x=x/10;
        }
    if(rev==OriginalX)
        {
            return true;
        }
    else
        {
            return false;
        }
        
    }
};