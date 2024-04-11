class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    sort(stones.begin(), stones.end());
        
        while (stones.size() > 1) {
            int n = stones.size();
            int y = stones.back();
            stones.pop_back();
            int x = stones.back();
            stones.pop_back();
            
            if (x != y) {
                stones.push_back(abs(x - y));
                sort(stones.begin(), stones.end());
            }
        }
        
        return stones.empty() ? 0 : stones[0];
    }
 };
