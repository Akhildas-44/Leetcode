class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        n=len(s)-1
        count=0
        while(n>=0):
            if(s[n]!=" "):
                count+=1
            elif(count>0):
                break
            n-=1
        return count