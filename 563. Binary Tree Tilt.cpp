#include <iostream>
#include <cmath>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int totalTilt = 0;

    // Helper function to compute subtree sums and node tilts
    int dfs(TreeNode* node) {
        if (!node) return 0;

        int leftSum = dfs(node->left);
        int rightSum = dfs(node->right);

        int tilt = abs(leftSum - rightSum);
        totalTilt += tilt;

        return leftSum + rightSum + node->val;
    }

    int findTilt(TreeNode* root) {
        dfs(root);
        return totalTilt;
    }
};

// int main() {
//     // Example tree:
//     //     1
//     //    / \
//     //   2   3
//
//     TreeNode* root = new TreeNode(1);
//     root->left = new TreeNode(2);
//     root->right = new TreeNode(3);
//
//     Solution solution;
//     int result = solution.findTilt(root);
//     cout << "Total tilt of tree: " << result << endl;
//
//     // Clean up memory
//     delete root->left;
//     delete root->right;
//     delete root;
//
//     return 0;
// }
