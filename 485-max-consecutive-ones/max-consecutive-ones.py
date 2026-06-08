class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        current_count=0
        max_count=0
        for i in range(len(nums)):
            if(nums[i]==1):
                current_count+=1
                if(current_count>max_count):
                    max_count=current_count
            else:
                current_count=0
        return max_count
        