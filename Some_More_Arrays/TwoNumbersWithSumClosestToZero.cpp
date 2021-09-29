// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
            sort(arr, arr+n);
            bool flag = 0;
            int start = 0, end = n-1, res = INT_MAX;
            while(start < end)
            {
                int sum = arr[start] + arr[end];
                if(abs(sum) < abs(res))
                    res = sum;
                if(sum < 0)
                    start++;
                else
                    end--;
            }
            return res;
        }
};

// { Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}  // } Driver Code Ends