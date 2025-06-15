#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        if (m * n != r * c) return mat;

        vector<vector<int>> result(r, vector<int>(c));

        for (int i = 0; i < m * n; ++i) {
            result[i / c][i % c] = mat[i / n][i % n];
        }

        return result;
    }
};

// int main() {
//     Solution sol;
//
//     vector<vector<int>> mat = {
//         {1, 2},
//         {3, 4}
//     };
//
//     int r = 1;
//     int c = 4;
//
//     vector<vector<int>> reshaped = sol.matrixReshape(mat, r, c);
//
//     cout << "Reshaped matrix:" << endl;
//     for (const auto& row : reshaped) {
//         for (int val : row) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
//
//     return 0;
// }
