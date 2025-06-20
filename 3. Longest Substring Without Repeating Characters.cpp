#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen;
        int maxLen = 0;
        int start = 0; // Start index of current substring

        for (int end = 0; end < s.length(); ++end) {
            char current = s[end];

            // If current char was seen and is inside the current window
            if (lastSeen.count(current) && lastSeen[current] >= start) {
                start = lastSeen[current] + 1;
            }

            lastSeen[current] = end;
            maxLen = max(maxLen, end - start + 1);
        }

        return maxLen;
    }
};

int main() {
    Solution solution;
    string s = "pwwkew";
    int result = solution.lengthOfLongestSubstring(s);
    cout << "Length of longest substring without repeating characters: " << result << endl;

    return 0;
}