// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    vector<int> lastIndex(256, -1);
    int i = 0, res = 0;
    for(int j = 0 ; j < S.length() ; j++)
    {
        i = max(i, lastIndex[S[j]] + 1);
        res = max(res, j - i + 1);
        lastIndex[S[j]] = j;
    }
    return res;
}