// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k)
    {
        // Code here.
        vector<int> v(k, 0);
        for(int i = 0 ; i < nums.size() ; i++)
            v[nums[i] % k]++;
        if(v[0] > 0 && v[0] % 2 != 0)
            return 0;
        for(int i =  1 ; i < k ; i++)
        {
            if(v[i] != 0)
            {
                if(v[i] != v[k-i])
                    return 0;
                v[i] = 0;
                v[k-i] = 0;
            }
        }
        return 1;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends