#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int sum = 0;

        sort(nums.begin(), nums.end());
        int n = nums.size();

        int option1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int option2 = nums[0] * nums[1] * nums[n - 1];

        if (option1 < option2) {
            sum = option2;
        } else {
            sum = option1;
        }

        return sum;
    }
};

// int main() {
//     Solution s;
//     vector<int> nums = {-100,-98,-1,2,3,4};
//
//     cout << s.maximumProduct(nums) << endl;
//
//     return 0;
// }