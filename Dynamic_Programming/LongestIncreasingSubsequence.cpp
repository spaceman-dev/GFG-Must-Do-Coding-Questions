// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    int ceilArr(int b[], int l, int r, int e)
    {
        while(l < r)
        {
            int mid = (l + r) / 2;
            if(b[mid] >= e)
                r = mid;
            else
                l = mid + 1;
        }
        return r;
    }
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        // your code here
        /*
            Basically, the ceilArr() function is nothing but the implementation of Binary Search to find just greater element than arr[i] present in the array tail[].
            you can use lower_bound() function in Binary Search STL instead
        */
       int b[n];
       b[0] = a[0];
       int j = 1;
       for(int i = 1 ; i < n ; i++)
       {
            if(a[i] > b[j-1])
                b[j++] = a[i];
            else
            {
                int temp = ceilArr(b, 0, j-1, a[i]);
                b[temp] = a[i];
            }
       }
       return j;
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends