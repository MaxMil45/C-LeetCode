#include <iostream>
#include "3. Longest Substring Without Repeating Characters.cpp"

int main() {
 Solution solution;
 string s = "pwwkew";
 int result = solution.lengthOfLongestSubstring(s);
 cout << "Length of longest substring without repeating characters: " << result << endl;

 return 0;
}