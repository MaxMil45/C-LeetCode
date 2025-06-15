#include <vector>
#include <iostream>

using namespace std;


class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int length = flowerbed.size();

        for (int i = 0; i < length; i++) {
            if (flowerbed[i] == 0) {
                bool emptyLeft = (i == 0 || flowerbed[i - 1] == 0);
                bool emptyRight = (i == length - 1 || flowerbed[i + 1] == 0);

                if (emptyLeft && emptyRight) {
                    flowerbed[i] = 1;
                    count++;
                    if (count >= n) return true;
                }
            }
        }

        return count >= n;
    }
};

// int main() {
//     Solution s;
//     vector<int> flowerbed = {1,0,0,0,0,1};
//
//     cout << s.canPlaceFlowers(flowerbed, 2) << endl;
//
//     return 0;
// }