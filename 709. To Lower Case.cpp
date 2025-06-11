#include <string>
#include <cctype>
#include <iostream>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for (char & c : s) {
            c = tolower(c);
        }
        return s;
    }
};

// int main() {
//     Solution s;
//     string result = s.toLowerCase("HEllo");
//     cout << result << endl;
// }