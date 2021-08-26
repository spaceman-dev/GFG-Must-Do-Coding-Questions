// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
struct distInd{
    int dist, ind;
};
class Solution
{
public:
    int minThrow(int N, int arr[])
    {
        // code here
        vector<bool> vis(31, false);
        int grid[31];
        memset(grid, -1, sizeof(grid));
        for(int i = 0 ; i < 2*N ; i += 2)
        {
            grid[arr[i]] = arr[i+1];
        }
        // for(int i = 0 ; i < 31 ; i ++)
        //     cout << grid[i] << " ";
        // cout << '\n';
        distInd d = {0, 1};
        queue<distInd> q;
        q.push(d);
        vis[1] = true;
        while(!q.empty())
        {
            d = q.front();
            int i = q.front().ind;
            if(i == 30)
                break;
            q.pop();
            for(int j = i + 1 ; j < i + 7 && j < 31 ; j++)
            {
                if(vis[j])
                    continue;
                vis[j] = true;
                distInd d1;
                d1.dist = d.dist + 1;
                if(grid[j] != -1)
                    d1.ind = grid[j];
                else
                    d1.ind = j;
                q.push(d1);
            }
        }
        return d.dist;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[2*N];
        for(int i = 0;i < 2*N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.minThrow(N, arr)<<"\n";
    }
    return 0;
}  // } Driver Code Ends