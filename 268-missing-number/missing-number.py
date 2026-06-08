class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n=len(nums)
        Total_Sum=n*(n+1)//2
        Partial_Sum=0
        for i in range(n):
            Partial_Sum=Partial_Sum+nums[i]
        return Total_Sum-Partial_Sum