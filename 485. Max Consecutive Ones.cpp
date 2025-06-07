#include <vector>
#include <iostream>

class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
        int max_count = 0;
        int current_count = 0;

        for (int num : nums) {
            if (num == 1) {
                current_count ++;
                if (current_count > max_count) {
                    max_count = current_count;
                }
            }
            else {
                current_count = 0;
            }
        }
        return  max_count;
    }
};

// int main() {
//     Solution s;
//     std::vector<int> nums{1, 0, 1, 0, 1, 1, 1, 0};
//     std::cout << s.findMaxConsecutiveOnes(nums) << std::endl;
//     return 0;
// }
