// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        vector<int> res;
        int sumSoFar = arr[0];
        int i = 0, j = 0;
        while(i < n && j < n)
        {
            if(sumSoFar == s)
            {
                res.push_back(i+1);
                res.push_back(j+1);
                return res;
            }
            else if(sumSoFar > s)
                sumSoFar -= arr[i++];
            else
                sumSoFar += arr[++j];
        }
        res.push_back(-1);
        return res;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends