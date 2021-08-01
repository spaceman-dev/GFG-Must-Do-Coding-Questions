// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
  public:
    // int dp[102][102];
    // int editDist(string s, string t, int i, int j)
    // {
    //     if(dp[i][j] != -1)
    //         return dp[i][j];
    //     if(i == s.length() && j == t.length())
    //         return 0;
    //     else if(i == s.length())
    //         return t.length() - j;
    //     else if(j == t.length())
    //         return s.length() - i;
    //     if(s[i] == t[j])
    //         return editDist(s, t, i+1, j+1);
    //     else
    //         return dp[i][j] = 1 + min(editDist(s, t, i+1, j+1), min(editDist(s, t, i+1, j), editDist(s, t, i, j+1)));
    // }
    int editDistance(string s, string t)
    {
        // Code here
        int n = s.length(), m = t.length();
        int dp[n+1][m+1];
        for(int i = 0 ; i <= n ; i++)
        {
            for(int j = 0 ; j <= m ; j++)
            {
                if(i == 0)
                    dp[i][j] = j;
                else if(j == 0)
                    dp[i][j] = i;
                else if(s[i-1] == t[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else
                    dp[i][j] = 1 + min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]));
            }
        }
        return dp[n][m];
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends