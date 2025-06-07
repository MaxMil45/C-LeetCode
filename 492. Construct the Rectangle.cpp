#include <vector>
#include <cmath>
#include <iostream>

class Solution {
public:
    std::vector<int> constructRectangle(int area) {
        int w = static_cast<int>(std::sqrt(area));
        while (area % w != 0) {
            w --;
        }

        int l = area / w;
        return {l, w};
    }
};

// int main() {
//     Solution s;
//     std::vector<int> result = s.constructRectangle(47);
//
//     std::cout << "[" << result[0] << ", " << result[1] << "]" << std::endl;
//     return 0;
// }