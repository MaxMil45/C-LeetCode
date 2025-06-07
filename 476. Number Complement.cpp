#include <iostream>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        int mask = 1;  // Start mask with just the rightmost bit set to 1
        
        // Build mask with all bits set to 1 for the length of num's binary representation
        while (mask < num) {
            mask = (mask << 1) | 1;  // Shift mask left by 1, then set the new rightmost bit to 1
        }
        
        // XOR num with mask flips only the bits of num's binary length
        return num ^ mask;
    }
};

// int main() {
//     Solution solution;
//     int num;
//
//     cout << "Enter a number: ";
//     cin >> num;
//
//     int complement = solution.findComplement(num);
//     cout << "The complement of " << num << " is: " << complement << endl;
//
//     return 0;
// }
