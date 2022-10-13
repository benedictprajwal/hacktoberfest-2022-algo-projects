// Longest Palindromic Subsequence (extension of Longest Palindromic Subsequence)
// Given a string s, find the longest palindromic subsequence's length in s.
// A subsequence is a sequence that can be derived from another sequence by
// deleting some or no elements without changing the order of the remaining
// elements.
// Input: s = "bbbab"
// Output: 4
// Explanation: One possible longest palindromic subsequence is "bbbb".
// #Leetcode Medium Problem
#include <bits/stdc++.h>
using namespace std;

// Bottom Up Tabulation Space Optimized DP Approach
// Shifting of Index
// Time Complexity : O(N * M) [N and M are lengths of s1 and s2 strings]
// Space Complexity : O(M)
// Auxiliary Space Complexity : O(1) [As no recursion involved]
int lcsBUSO(string &s1, string &s2)
{
    int n = s1.size(), m = s2.size();
    vector<int> prev(m + 1, 0), curr(m + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                curr[j] = 1 + prev[j - 1];
            else
                curr[j] = max(prev[j], curr[j - 1]);
        }
        prev = curr;
    }
    return prev[m];
}
// Function call
int lcsPalin(string s)
{
    string t = s;
    reverse(s.begin(), s.end());
    return lcsBUSO(s, t);
}
// Main method
int main()
{
    string s;
    cin >> s;
    cout << "String : " << s << endl;
    cout << lcsPalin(s) << endl;
    return 0;
}