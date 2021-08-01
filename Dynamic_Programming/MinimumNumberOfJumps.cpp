// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n)
    {
        // Your code here
        int currFar = 0, currEnd = 0, count = 0;
        for(int i = 0 ; i < n-1 ; i++)
        {
            currFar = max(currFar, i + arr[i]);
            if(i == currEnd)
            {
                count++;
                currEnd = currFar;
            }
            if(currEnd > n-2)
                break;
        }
        return currEnd < n-1 ? -1 : count;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends