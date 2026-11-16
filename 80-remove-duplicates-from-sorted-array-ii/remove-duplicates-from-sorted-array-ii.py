class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        if(len(nums)<3):
            return len(nums)
        k=2
        for i in range(k,len(nums)):
            if(nums[i]>nums[k-2]):
                nums[k]=nums[i]
                k=k+1
        return k
        