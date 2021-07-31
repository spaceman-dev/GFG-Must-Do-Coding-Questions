// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    typedef struct times
    {
        int start, end;
    }times;
    static bool comp(times t1, times t2)
    {
        return t1.end < t2.end;
    }
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        times t[n];
        for(int i = 0 ; i < n ; i++)
        {
            t[i].start = start[i];
            t[i].end = end[i];
        }
        sort(t, t + n, comp);
        int i = 0, count = 1;
        for(int j = 1 ; j < n ; j++)
        {
            if(t[j].start > t[i].end)
            {
                count++;
                i = j;
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends