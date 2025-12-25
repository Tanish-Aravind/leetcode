#include <vector>
#include <unordered_map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        std::unordered_map<int, int> counts;

        for (int num : nums) {
            
            counts[num]++;
            
           
            if (counts[num] > 1) {
                return true;
            }
        }

        return false;
    }
};