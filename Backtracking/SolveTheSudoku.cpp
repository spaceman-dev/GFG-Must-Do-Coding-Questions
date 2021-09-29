// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


 // } Driver Code Ends

class Solution 
{
    public:
    bool isSafe(int grid[N][N], int &n, int i, int j)
    {
        for(int k = 0 ; k < N ; k++)
        {
            if(grid[i][k] == n || grid[k][j] == n)
                return false;
        }
        int r = i - i % 3, c = j - j % 3;
        for(int i = 0 ; i < 3 ; i++)
        {
            for(int j = 0 ; j < 3 ; j++)
            {
                if(grid[i + r][j + c] == n)
                    return false;
            }
        }
        return true;
    }
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        int i, j;
        for(i = 0 ; i < N ; i++)
        {
            bool flag = 0;
            for(j = 0 ; j < N ; j++)
            {
                if(!grid[i][j])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                break;
        }
        if(i == N && j == N)
            return true;
        for(int n = 1 ; n <= N ; n++)
        {
            if(isSafe(grid, n, i, j))
            {
                grid[i][j] = n;
                if(SolveSudoku(grid));
                    return true;
                grid[i][j] = 0;
            }
        }
        return false;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i = 0 ;  i < N ; i++)
        {
            for(int j = 0 ; j < N ; j++)
                cout << grid[i][j] << " ";
        }
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}  // } Driver Code Ends