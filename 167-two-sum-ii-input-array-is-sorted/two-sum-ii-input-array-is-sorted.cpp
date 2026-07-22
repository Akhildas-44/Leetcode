class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        int current_sum=0;
        while(i<j)
        {
           current_sum=numbers[i]+numbers[j];
           if(current_sum>target)
           {
            j-=1;
           }
           else if(current_sum<target)
           {
               i+=1;
           }
           else
           {
            return{i+1,j+1};
           }
        }
      return{};  
    }
};