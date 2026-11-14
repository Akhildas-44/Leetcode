class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        ans=0
        for i in range(1,len(prices)):
            profit=prices[i]-prices[i-1]
            if(profit>0):
                ans=ans+profit
        return ans
        