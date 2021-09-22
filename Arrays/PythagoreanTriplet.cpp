// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) 
	{
	    // code here
	    sort(arr, arr + n);
	    for(int i = n-1 ; i > 1 ; i--)
	    {
	        int low = 0, high = i-1;
	        while(low < high)
	        {
	            int a = arr[low] * arr[low], b = arr[high] * arr[high], c = arr[i] * arr[i];
	            if(a + b == c)
	                return 1;
	            else if(a + b < c)
	                low++;
	            else
	                high--;
	        }
	    }
	    return 0;
	}
};
// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
  // } Driver Code Ends