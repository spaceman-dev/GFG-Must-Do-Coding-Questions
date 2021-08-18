// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isSafe(vector<string> &grid, int row, int col, int &n)
    {
        for(int i = 0 ; i < n ; i++)
        {
            if(grid[row][i] == 'Q' || grid[i][col] == 'Q')
                return false;
        }
        for(int i = row-1, j = col-1 ; i >= 0 && j >= 0 ; i--, j--)
        {
            if(grid[i][j] == 'Q')
                return false;
        }
        for(int i = row-1, j = col+1 ; i >= 0 && j < n ; i--, j++)
        {
            if(grid[i][j] == 'Q')
                return false;
        }
        return true;
    }
    void nQueenRec(vector<vector<string>> &res, vector<string> &grid, int row, int &n)
    {
        if(row == n)
        {
            res.push_back(grid);
            return;
        }
        for(int col = 0 ; col < n ; col++)
        {
            if(isSafe(grid, row, col, n))
            {
                grid[row][col] = 'Q';
                nQueenRec(res, grid, row+1, n);
                grid[row][col] = '.';
            }
        }
    }
    vector<vector<int>> nQueen(int n)
    {
        // code here
        vector<string> grid(n, string(n, '.'));
        vector<vector<string>> res;
        nQueenRec(res, grid, 0 ,n);
        vector<vector<int>> ans;
        for(int i = 0 ; i < res.size() ; i++)
        {
            vector<int> v;
            for(int j = 0 ; j < res[0].size() ; j++)
            {
                v.push_back(res[i][j].find('Q')+1);
                // for(int k = 0 ; k < res[i][j].length() ; k++)
                // {
                //     if(res[i][j][k] == 'Q')
                //         v.push_back(k+1);
                // }
            }
            ans.push_back(v);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends