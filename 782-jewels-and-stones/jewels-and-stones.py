class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        Jset=set()
        count=0
        for i in range(len(jewels)):
            Jset.add(jewels[i])
        for i in range(len(stones)):
            if((stones[i]) in Jset):
                count+=1
        return count
        