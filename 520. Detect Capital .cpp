#include <string>
#include <cctype>  // for isupper() and islower()
#include <iostream>

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int upperCount = 0;

        // Count number of uppercase letters
        for (char c : word) {
            if (isupper(c)) {
                upperCount++;
            }
        }

        // 1. All letters are uppercase
        // 2. All letters are lowercase
        // 3. Only first letter is uppercase, rest lowercase
        if (upperCount == word.length()) return true;
        if (upperCount == 0) return true;
        if (upperCount == 1 && isupper(word[0])) return true;

        return false;  // If none of the valid patterns match
    }
};


// int main() {
//     Solution sol;
//
//     bool result = sol.detectCapitalUse("Max");
//
//     cout << result << endl;
//     cout << endl;
// }