// Time Complexity:  O(n)
// Space Complexity: O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seenMap;
        for(int i = 0; i < nums.size(); ++i) {
            int diff = target - nums[i];
            if(seenMap.find(diff) != seenMap.end()) {
                return {seenMap[diff], i};
            }
            seenMap.insert({nums[i], i});
        }
        return {};
    }
};