// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    // int dp[1002][1002];
    // int knapsack01(int W, int wt[], int val[], int N)
    // {
    //     if(dp[N][W] != -1)
    //         return dp[N][W];
    //     if(N == 0 || W == 0)
    //         return 0;
    //     if(wt[N - 1] <= W)
    //         return dp[N][W] = max(val[N - 1] + knapsack01(W - wt[N - 1], wt, val, N-1), knapsack01(W, wt, val, N-1));
    //     else
    //         return dp[N][W] = knapsack01(W, wt, val, N-1);
    // }
    int knapSack(int W, int wt[], int val[], int N) 
    { 
       // Your code here
       int dp[N+1][W+1];
       for(int i = 0 ; i <= N ; i++)
       {
           for(int j = 0 ; j <= W ; j++)
           {
                if(i == 0 || j == 0)
                    dp[i][j] = 0;
                else if(wt[i-1] <= j)
                    dp[i][j] = max(val[i-1] + dp[i-1][j - wt[i - 1]], dp[i-1][j]);
                else
                    dp[i][j] = dp[i-1][j];
           }
       }
       return dp[N][W];
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends