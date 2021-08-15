// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
        vector<vector<int>> weight(grid.size()+1, vector<int>(grid[0].size()+1, INT_MAX));
        weight[0][0] = grid[0][0];
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        pq.push({grid[0][0], {0, 0}});
        int rows[4] = {1, -1, 0, 0};
        int cols[4] = {0, 0, 1, -1};
        while(!pq.empty())
        {
            int i = pq.top().second.first, j = pq.top().second.second;
            pq.pop();
            for(int k = 0 ; k < 4 ; k++)
            {
                int x = i + rows[k], y = j + cols[k];
                if((x >= 0 && y >= 0 && x < grid.size() && y < grid.size()) && (weight[i][j] + grid[x][y] < weight[x][y]))
                {
                    weight[x][y] = weight[i][j] + grid[x][y];
                    pq.push({weight[x][y], {x, y}});
                }
            }
        }
        return weight[grid.size()-1][grid.size()-1];
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends