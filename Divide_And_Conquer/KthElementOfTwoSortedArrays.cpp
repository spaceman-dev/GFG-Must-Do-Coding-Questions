// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i = n - 1, j = 0;
        while(i >= 0 && j < m)
        {
            if(arr1[i] > arr2[j])
                swap(arr1[i--], arr2[j++]);
            else
                break;
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);
        return k <= n ? arr1[k - 1] : arr2[k - n - 1];
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends