#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bitCount(n + 1);
        bitCount[0] = 0;

        for (int i = 1; i <= n; i++) {
            bitCount[i] = bitCount[i >> 1] + (i & 1);
        }

        return bitCount;
    }
};

// int main() {
//     int n = 5;
//
//     Solution solution;
//     vector<int> result = solution.countBits(n);
//
//     for (int i : result) {
//         cout << i << " ";
//     }
//     cout << endl;
//
//     return 0;
// }
