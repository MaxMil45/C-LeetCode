#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }

        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) {
                result.push_back(i + 1);
            }
        }

        return result;
    }
};

// int main() {
//     Solution solution;
//     vector<int> nums = {1, 3, 4, 6, 7, 4};
//     vector<int> result = solution.findDisappearedNumbers(nums);
//
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;
//
//     return 0;
// }
