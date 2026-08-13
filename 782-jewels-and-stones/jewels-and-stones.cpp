class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        std::set<char>Jset={};
        int count=0;
        for(int i=0;i<jewels.size();i++)
        {
            Jset.insert(jewels[i]);
        }
        for(int i=0;i<stones.size();i++)
        {
            if(Jset.find(stones[i])!=Jset.end())
            {
                count++;
            }
        }
        return count;
    }
};