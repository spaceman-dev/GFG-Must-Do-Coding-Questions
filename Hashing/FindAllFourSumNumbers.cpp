// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k)
    {
        // Your code goes here
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        map<vector<int>, int> mp;
        int i = 0, j = arr.size()-1;
        while(i < j)
        {
            j = i+1;
            while(j < arr.size())
            {
                int start = j+1, end = arr.size()-1;
                while(start < end)
                {
                    if(arr[i] + arr[j] + arr[start] + arr[end] == k)
                    {
                        vector<int> v;
                        v.push_back(arr[i]);
                        v.push_back(arr[j]);
                        v.push_back(arr[start]);
                        v.push_back(arr[end]);
                        if(mp[v] == 0)
                        {
                            res.push_back(v);
                            mp[v] = 1;
                        }
                        start++, end--;
                    }
                    else if(arr[i] + arr[j] + arr[start] + arr[end] > k)
                        end--;
                    else
                        start++;
                }
                j++;
            }
            i++;
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends