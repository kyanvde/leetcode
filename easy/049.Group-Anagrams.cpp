// Time Complexity: O(m * n)
// Space Complexity: O(m) extra space, O(m * n) for the resulting list
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (const string &str : strs) {
            vector<int> freq(26, 0);

            for (char c : str) {
                ++freq[c - 'a']; // Map a to index 0 and z to index 25
            }
            string key = to_string(freq[0]);

            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(freq[i]);
            }
            res[key].push_back(str);
        }
        vector<vector<string>> result;
        for (const pair<string, vector<string>> &pair : res) {
            result.push_back(pair.second);
        }
        return result;
    }
};