// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    void solve(int N, int M, vector<vector<int>> &A, int X, int Y, int i, int j, int &count, int &res)
    {
        if(i < 0 || j < 0 || i >= N || j >= M || A[i][j] == 0)
            return;
        if(i == X && j == Y)
        {
            res = min(res, count);
            return;
        }
        count++;
        A[i][j] = 0;
        solve(N, M, A, X, Y, i+1, j, count, res);
        solve(N, M, A, X, Y, i, j+1, count, res);
        solve(N, M, A, X, Y, i-1, j, count, res);
        solve(N, M, A, X, Y, i, j-1, count, res);
        A[i][j] = 1;
        count--;
    }
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y)
    {
        // code here
        int count = 0, res = INT_MAX;
        solve(N, M, A, X, Y, 0, 0, count, res);
        return res == INT_MAX ? -1 : res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}  // } Driver Code Ends