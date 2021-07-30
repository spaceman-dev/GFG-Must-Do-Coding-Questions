// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int arr[], int n)
{
    int maxl[n], minr[n];
    maxl[0] = arr[0], minr[n-1] = arr[n-1];
    for(int i = 1 ; i < n ; i++)
        maxl[i] = max(maxl[i-1], arr[i]);
    for(int i = n - 2 ; i >= 0 ; i--)
        minr[i] = min(minr[i+1], arr[i]);
    for(int i = 0 ; i < n ; i++)
    {
        if(maxl[i] == minr[i] &&  i != 0 && i != n-1)
            return minr[i];
    }
    return -1;
}