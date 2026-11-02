class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        std::vector<std::vector<int>>result;
        std::vector<int>path;
        auto backtrack=[&](auto&self,int start)->void
        {
            result.push_back(path);
            for(int i=start;i<nums.size();i++) {
            path.push_back(nums[i]);
            self(self,i+1);
            path.pop_back();
        }
        };
        
    
        backtrack(backtrack,0);
        return result;
    }
};