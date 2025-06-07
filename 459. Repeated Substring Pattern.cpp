#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        
        for (int len = 1; len <= n / 2; ++len) {
            if (n % len != 0) continue; // Only try lengths that divide the whole string
            
            string substring = s.substr(0, len);
            string built = "";
            
            for (int i = 0; i < n / len; ++i) {
                built += substring;
            }
            
            if (built == s) return true;
        }
        
        return false;
    }
};

// int main() {
//     Solution sol;
//     cout << boolalpha << sol.repeatedSubstringPattern("abab") << endl;       // true
//     cout << boolalpha << sol.repeatedSubstringPattern("aba") << endl;        // false
//     cout << boolalpha << sol.repeatedSubstringPattern("abcabcabcabc") << endl; // true
// }
