#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        int n = bits.size();
        while (i < n - 1) {
            if (bits[i] == 1) {
                i += 2;
            } else {
                i += 1;
            }
        }
        return i == n - 1;
    }
};

// int main() {
//     Solution s;
//
//     vector<int> bits1 = {1, 0, 0};
//     cout << "Example 1: " << (s.isOneBitCharacter(bits1) ? "true" : "false") << endl;
//
//     return 0;
// }