class Solution:
    def subsets(self, nums: list[int]) -> list[list[int]]:
        result=[]
        def backtrack(path,start):
            result.append(list(path))
            for i in range(start,len(nums)):
                path.append(nums[i])
                backtrack(path,i+1)
                path.pop()
        backtrack([],0)
        return result        