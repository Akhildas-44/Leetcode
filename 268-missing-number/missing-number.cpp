class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int Total_Sum=n*(n+1)/2;
        int Partial_Sum=0;
        for(int i=0;i<n;i++)
        {
            Partial_Sum=Partial_Sum+nums[i];
        }
        return Total_Sum-Partial_Sum;
        
    }
};