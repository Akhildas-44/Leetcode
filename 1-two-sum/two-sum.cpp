class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            int pair=target-nums[i];
            if(map[pair] && map[pair]!=i)
            {
                return{i,map[pair]};
            }
        }
        return{};
        
    }
};