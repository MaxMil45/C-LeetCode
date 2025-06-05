#include <iostream>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        long sum = 0;
        int counter = 0;

        while (n >= sum) {
            counter++;
            sum += counter;
        }

        return counter - 1;
    }
};

// int main() {
//     Solution solution;
//     int result = solution.arrangeCoins(8);
//     cout << result << endl;
//     return 0;
// }