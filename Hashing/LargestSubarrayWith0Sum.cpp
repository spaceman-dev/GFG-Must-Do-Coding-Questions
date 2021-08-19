// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << maxLen(A, N) << endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function*/

int maxLen(int A[], int n)
{
    // Your code here
    int sum = 0, res = 0;
    unordered_map<int, int> mp;
    for(int i = 0 ; i < n ; i++)
    {
        sum += A[i];
        if(sum == 0)
            res = i+1;
        if(mp.find(sum) == mp.end())
            mp[sum] = i;
        else
            res = max(i - mp[sum], res);
    }
    return res;
}
