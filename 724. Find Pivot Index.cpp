#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int pivot = i;

            int leftSum = std::accumulate(nums.begin(), nums.begin() + pivot, 0);
            int rightsum = std::accumulate(nums.begin() + pivot + 1, nums.end(), 0);

            if (leftSum == rightsum) {
                return pivot;
            }

        }

        return -1;
    }
};

// int main() {
//     Solution s;
//     std::vector<int> nums = {1, 7, 3, 6, 5, 6};
//     int pivot = s.pivotIndex(nums);
//     std::cout << "Pivot index: " << pivot << std::endl;
// }