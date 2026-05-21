class Solution:
    def reverse(self, x: int) -> int:
        OriginalX=x
        x=abs(OriginalX)
        rev=int(str(x)[::-1])
        if rev<-2147483648 or rev>2147483647:
            return 0
        if (OriginalX>0):
            return rev
        else:
            return -rev
        