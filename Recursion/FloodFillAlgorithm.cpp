// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    void recFloodFill(vector<vector<int>> &image, int i, int j, int newc, int oldc)
    {
        if(i >= image.size() || i < 0 || j >= image[0].size() || j < 0)
            return;
        if(image[i][j] != oldc || image[i][j] == newc)
            return;
        image[i][j] = newc;
        recFloodFill(image, i+1, j, newc, oldc);
        recFloodFill(image, i, j+1, newc, oldc);
        recFloodFill(image, i-1, j, newc, oldc);
        recFloodFill(image, i, j-1, newc, oldc);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
        // Code here
        recFloodFill(image, sr, sc, newColor, image[sr][sc]);
        return image;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends