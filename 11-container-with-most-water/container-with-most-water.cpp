class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size() - 1;
        int Maxwater=0;
        while(i<j)
        {
            int area= std::min(height[i],height[j])*(j - i);
            Maxwater=std::max(Maxwater,area);
            if(height[i]>=height[j])
            {
                j-=1;
            }
            else
            {
                i+=1;
            }
            
        }
        return Maxwater;
        
    }
};