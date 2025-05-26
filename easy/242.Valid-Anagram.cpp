// Time Complexity:  O(n + m) where n is the length of the string s and m is the length of the string t
// Space Complexity: O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        std::unordered_map<char, int> freqS;
        std::unordered_map<char, int> freqT;
        for(int i = 0; i < s.length(); i++) {
            ++freqS[s[i]];
            ++freqT[t[i]];
        }
        return freqS == freqT;
    }
};