// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) 
	{
	    // code here
	    if(n == 0)
	        return 1;
	    ll a = 1, b = 1, c;
	    for(int i = 0 ; i < n ; i++)
	    {
	        c = (a % 1000000007) + (b % 1000000007);
	        a = b;
	        b = c;
	    }
	    return (c % 1000000007);
	}
};
// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends