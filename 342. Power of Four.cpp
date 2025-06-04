#include <iostream>
using namespace std;
#include <cmath>

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        double logVal = log(n) / log(4);
        return floor(logVal) == logVal;
    }
};

// int main() {
//
//     Solution solution;
//     cout << std::boolalpha << solution.isPowerOfFour(8) << " ";
//     cout << solution.isPowerOfFour(16) << " ";
//     cout << solution.isPowerOfFour(1) << " ";
//     cout << solution.isPowerOfFour(5) << " ";
//
//     return 0;
// }