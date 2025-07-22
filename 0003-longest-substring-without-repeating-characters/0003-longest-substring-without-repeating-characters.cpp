#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(128, -1); // ASCII table size
        int maxLen = 0;
        int start = 0; // left pointer

        for (int end = 0; end < s.length(); ++end) {
            char ch = s[end];

            // If the character was seen, move the start pointer
            if (lastIndex[ch] >= start) {
                start = lastIndex[ch] + 1;
            }

            // Update the last seen index
            lastIndex[ch] = end;

            // Update max length
            maxLen = max(maxLen, end - start + 1);
        }

        return maxLen;
    }
};
