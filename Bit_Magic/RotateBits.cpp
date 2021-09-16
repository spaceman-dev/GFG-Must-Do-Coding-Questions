// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            vector<int> res;
            d %= 16;
            int l = (n << d) | (n >> (16 - d));
            l = (l & ((1 << 16) - 1));
            int r = (n >> d) | (n << (16 - d));
            r = (r & ((1 << 16) - 1));
            res.push_back(l);
            res.push_back(r);
            return res;
        }
};
// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends