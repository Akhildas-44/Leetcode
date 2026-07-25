class Solution:
    def maxArea(self, height: List[int]) -> int:
        i=0
        j=len(height)-1
        Maxwater=0
        while(i<j):
            area=min(height[i],height[j])*(j - i)
            Maxwater=max(Maxwater,area)
            if(height[i]>=height[j]):
                j-=1
            else:
                i+=1
        return Maxwater
        