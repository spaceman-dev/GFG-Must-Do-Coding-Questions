// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid)
    {
        // Code here
        int mat[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        int n = grid.size(), m = grid[0].size(), count = -1;
        queue<pair<int, int>> q;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push(make_pair(i, j));
                    grid[i][j] = 0;
                }
            }
        }
        while(!q.empty())
        {
            int ql = q.size();
            for(int i = 0 ; i < ql ; i++)
            {
                int x = q.front().first, y = q.front().second;
                q.pop();
                for(int row = 0 ; row < 4 ; row++)
                {
                    if(x + mat[row][0] >= 0 && y + mat[row][1] >= 0 && x + mat[row][0] < n && y + mat[row][1] < m && grid[x + mat[row][0]][y + mat[row][1]] == 1)
                    {
                        grid[x + mat[row][0]][y + mat[row][1]] = 0;
                        q.push(make_pair(x + mat[row][0], y + mat[row][1]));
                    }
                }
            }
            count++;
        }
        for(auto it : grid)
        {
            for(auto val : it)
            {
                if(val == 1)
                    return -1;
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends