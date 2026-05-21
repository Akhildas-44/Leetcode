class Solution:
    def reverse(self, x: int) -> int:
        OriginalX=x
        x=abs(OriginalX)
        rev=int(str(x)[::-1])
        limit=pow(2,31)
        if rev<-limit or rev>limit:
            return 0
        if (OriginalX>0):
            return rev
        else:
            return -rev
        