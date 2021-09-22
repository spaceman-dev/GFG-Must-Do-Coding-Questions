// { Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        // code here
        int start = 0, end = n-1;
        while(start < end)
        {
            int mid = start + (end - start) / 2;
            if((mid % 2 == 0) && arr[mid] == arr[mid + 1] || (mid % 2 != 0) && arr[mid] == arr[mid - 1])
                start = mid + 1;
            else
                end = mid;
        }
        return arr[start];
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}  // } Driver Code Ends