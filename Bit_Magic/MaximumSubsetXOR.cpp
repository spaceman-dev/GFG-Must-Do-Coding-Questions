// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// Function to return maximum XOR subset in set[]

class Solution
{
    public:
    int dp[105][105];
    int xorRec(int arr[], int val, int count, int N)
    {
        if(count == N)
            return val;
        if(dp[val][count] != -1)
            return dp[val][count];
        else
            return dp[val][count] = max(xorRec(arr, val ^ arr[count], count+1, N), xorRec(arr, val, count+1, N));
    }
    int maxSubarrayXOR(int arr[], int N)
    {
        //Your code here
        memset(dp, -1, sizeof(dp));
        return xorRec(arr, 0, 0, N);
    }
};

// { Driver Code Starts.
int main()
{

    int t,n,a[100004],k;
    scanf("%d",&t);
    while(t--)
    {
        //cin>>n;
       scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        Solution obj;
        printf("%d\n",obj.maxSubarrayXOR(a,n));
       // cout<<bin(a,0,n-1,k)<<endl;
    }
}  // } Driver Code Ends