// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    typedef struct meet
    {
        int start, end;
    }meet;
    static bool comp(meet m1, meet m2)
    {
        return m1.end < m2.end;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        meet m[n];
        for(int i = 0 ; i < n ; i++)
        {
            m[i].start = start[i];
            m[i].end = end[i];
        }
        sort(m, m + n, comp);
        int i = 0, count = 1;
        for(int j = 1 ; j < n ; j++)
        {
            if(m[j].start > m[i].end)
            {
                count++;
                i = j;
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends