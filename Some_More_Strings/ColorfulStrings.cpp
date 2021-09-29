// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long possibleStrings(int n, int r, int b, int g) 
    {
        // code here
        long long fact[21];
	    fact[0] = 1;
        for(int i = 1 ; i <= 20 ; i++)
            fact[i] = fact[i-1] * i;
        long long res = 0, sum = n - (r + b + g);
        for(int i = 0 ; i <= sum ; i++)
        {
            for(int j = 0 ; j <= sum ; j++)
            {
                if(sum - (i + j) >= 0)
                    res += fact[n] / (fact[r + i] * fact[g + j] * fact[sum - i - j + b]);
            }
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r, g, b;
        cin >> n >> r >> g >> b;
        Solution ob;
        cout << ob.possibleStrings(n, r, b, g) << endl;
    }
    return 0;
}
  // } Driver Code Ends