class Solution {
public:
    int search(vector<int>& nums, int target) {
        int length= nums.size();
        for(int i=0;i<length;i++)
        {
            if(target==nums[i])
            return i;
        }
        return -1;
    }
    
};