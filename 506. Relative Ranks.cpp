#include <string>         // For using the string class
#include <vector>         // For using the vector container
#include <algorithm>      // For sort() and greater<>
#include <unordered_map>  // For using hash maps (key-value pairs)
#include <iostream>       // For input/output operations

using namespace std;      // Avoids writing std:: repeatedly

// Define a class called Solution
class Solution {
public:
    // Member function that returns a vector of strings
    // Takes a reference to a vector of integers as input
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();  // Get the number of athletes (elements in the vector)

        // Copy the original score vector to preserve input order
        vector<int> sortedScore = score;

        // Sort the copied vector in descending order
        // 'greater<int>()' is a comparison function object that sorts from high to low
        sort(sortedScore.begin(), sortedScore.end(), greater<int>());

        // Create a hash map to associate each score with its corresponding rank
        unordered_map<int, string> scoreToRank;

        // Loop through the sorted scores and assign ranks
        for (int i = 0; i < n; ++i) {
            if (i == 0)
                scoreToRank[sortedScore[i]] = "Gold Medal";       // 1st place
            else if (i == 1)
                scoreToRank[sortedScore[i]] = "Silver Medal";     // 2nd place
            else if (i == 2)
                scoreToRank[sortedScore[i]] = "Bronze Medal";     // 3rd place
            else
                scoreToRank[sortedScore[i]] = to_string(i + 1);   // 4th and beyond
        }

        // Vector to store the final rankings in the original input order
        vector<string> result;

        // Traverse the original score vector and get the rank from the map
        for (int i = 0; i < n; ++i) {
            result.push_back(scoreToRank[score[i]]);
        }

        return result; // Return the final vector of ranks
    }
};

// // Entry point of the C++ program
// int main() {
//     // Sample input vector
//     vector<int> score = {10, 3, 8, 9, 4};
//
//     // Create an instance of the Solution class
//     Solution sol;
//
//     // Call the function and store the result
//     vector<string> ranks = sol.findRelativeRanks(score);
//
//     // Output the result using a range-based for loop
//     cout << "Ranks: ";
//     for (const string& rank : ranks) {
//         cout << "\"" << rank << "\" ";
//     }
//     cout << endl;
//
//     return 0;
// }
