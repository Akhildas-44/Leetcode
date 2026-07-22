class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n=len(nums)
        map={}
        for i in range(n):
            map[nums[i]]=i
        for i in range(n):
            pair=target-nums[i]
            if pair in map and map[pair]!=i:
                return [i,map[pair]]
        return[]
        