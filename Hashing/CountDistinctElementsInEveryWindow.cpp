// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        unordered_map<int, int> mp;
        int count = 0;
        vector<int> res;
        for(int i = 0 ; i < k ; i++)
        {
            if(mp[A[i]] == 0)
                count++;
            mp[A[i]]++;
        }
        res.push_back(count);
        for(int i = k ; i < n ; i++)
        {
            if(mp[A[i - k]] == 1)
                count--;
            mp[A[i - k]]--;
            if(mp[A[i]] == 0)
                count++;
            mp[A[i]]++;
            res.push_back(count);
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends