// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        int sumA = 0, sumB = 0;
        for(int i = 0 ; i < n ; i++)
            sumA += A[i];
        for(int i = 0 ; i < m ; i++)
            sumB += B[i];
        sort(A, A+n);
        sort(B, B+m);
        int i = 0, j = 0, sum = INT_MIN;
        while(i < n && j < m)
        {
            if(sumA - A[i] + B[j] == sumB - B[j] + A[i])
                return 1;
            if(sumA - A[i] + B[j] - (sumB - B[j] + A[i]) > sum)
                sum = sumA - A[i] + B[j] - (sumB - B[j++] + A[i]);
            else
            {
                sum = INT_MIN;
                i++, j = 0;
            }
        }
        return -1;
	}
 

};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}





  // } Driver Code Ends