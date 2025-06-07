#include <iostream>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorResult = x ^ y;
        int distance = 0;

        while (xorResult != 0) {
            distance += xorResult & 1; // Check if the last bit is 1
            xorResult >>= 1;           // Shift right to check the next bit
        }

        return distance;
    }
};
//
// int main() {
//     Solution sol;
//     cout << sol.hammingDistance(3, 1) << endl; // Output: 1
//     cout << sol.hammingDistance(1, 4) << endl; // Output: 2
// }