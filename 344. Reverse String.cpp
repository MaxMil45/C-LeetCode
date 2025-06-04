#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>


class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};

// int main() {
//     vector<char> myList = {'h', 'e', 'l', 'l', 'o'};
//
//     Solution sol;
//     sol.reverseString(myList);  // call the function and pass myList
//
//     // Print result
//     for (char c : myList) {
//         cout << c;  // Output: "olleh"
//     }
//
//     return 0;
// }