#include <iostream>
#include <vector>
#include <algorithm>

int arrayPairSum(std::vector<int>& nums) {
    // Sort the array
    std::sort(nums.begin(), nums.end());

    int sum = 0;
    // Add every first element in each pair
    for (int i = 0; i < nums.size(); i += 2) {
        sum += nums[i];
    }

    return sum;
}

// int main() {
//     std::vector<int> nums1 = {1, 4, 3, 2};
//     std::cout << "Output: " << arrayPairSum(nums1) << std::endl; // Output: 4
//
//     std::vector<int> nums2 = {6, 2, 6, 5, 1, 2};
//     std::cout << "Output: " << arrayPairSum(nums2) << std::endl; // Output: 9
//
//     return 0;
// }
