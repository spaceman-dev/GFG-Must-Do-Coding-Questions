// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) 
    {
        // code here
        int *res = new int(2);
        for(int i = 0 ; i < n ; i++)
            arr[i] -= 1;
        for(int i = 0 ; i < n ; i++)
            arr[arr[i] % n] += n;
        for(int i = 0 ; i < n ; i++)
        {
            arr[i] /= n;
            if(arr[i] == 2)
                res[0] = i + 1;
            if(arr[i] == 0)
                res[1] = i + 1;
        }
        return res;
    }
};
// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends