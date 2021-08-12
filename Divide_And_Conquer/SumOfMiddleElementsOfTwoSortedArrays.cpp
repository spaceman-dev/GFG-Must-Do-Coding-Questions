// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n)
    {
        // code here 
        int i = 0, j = n-1;
        while(i < n && j >= 0)
        {
            if(ar1[i++] > ar2[j--])
                swap(ar1[i-1], ar2[j+1]);
        }
        int maxa1 = ar1[0], mina2 = ar2[0];
        for(int i = 1 ; i < n ; i++)
        {
            maxa1 = max(ar1[i], maxa1);
            mina2 = min(ar2[i], mina2);
        }
        return maxa1 + mina2;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends