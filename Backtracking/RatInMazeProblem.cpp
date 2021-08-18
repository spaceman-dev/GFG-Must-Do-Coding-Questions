// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool isSafe(vector<vector<bool>> &vis, vector<vector<int>> &m, int n, int i, int j)
    {
        return i >= 0 && j >= 0 && i < n && j < n && !vis[i][j] && m[i][j];
    }
    void ratMaze(vector<string> &res, string &route, vector<vector<bool>> &vis, vector<vector<int>> &m, int n, int i, int j)
    {
        if(i < 0 || j < 0 || i > n-1 || j > n-1 || vis[i][j] || !m[i][j])
            return;
        if(i == n-1 && j == n-1)
        {
            res.push_back(route);
            return;
        }
        vis[i][j] = true;
        if(isSafe(vis, m, n, i-1, j))
        {
            route.push_back('U');
            ratMaze(res, route, vis, m, n, i-1, j);
            route.pop_back();
        }
        if(isSafe(vis, m, n, i+1, j))
        {
            route.push_back('D');
            ratMaze(res, route, vis, m, n, i+1, j);
            route.pop_back();
        }
        if(isSafe(vis, m, n, i, j-1))
        {
            route.push_back('L');
            ratMaze(res, route, vis, m, n, i, j-1);
            route.pop_back();
        }
        if(isSafe(vis, m, n, i, j+1))
        {
            route.push_back('R');
            ratMaze(res, route, vis, m, n, i, j+1);
            route.pop_back();
        }
        vis[i][j] = false;
    }
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        // Your code goes here
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        vector<string> res;
        string route;
        ratMaze(res, route, vis, m, n, 0, 0);
        sort(res.begin(), res.end());
        return res;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends