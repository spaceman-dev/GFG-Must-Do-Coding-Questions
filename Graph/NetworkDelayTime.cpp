// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findDelayTime(int V, vector<vector<int>> &edges, int src) {
        // code here
        vector<vector<pair<int, int>>> adjList(V);
        vector<int> minTimes(V, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(int i = 0; i < edges.size(); i++)
            adjList[edges[i][0]].push_back({edges[i][1], edges[i][2]});
        minTimes[src] = 0;
        pq.push({0, src});
        while(!pq.empty())
        {
            pair<int, int> timeNode = pq.top();
            int currTime = timeNode.first;
            int currNode = timeNode.second;
            pq.pop();
            if(currTime > minTimes[currNode])
                continue;
            for(pair<int, int> adj : adjList[currNode])
            {
                int adjTime = adj.second;
                int adjNode = adj.first;
                if(adjTime + currTime < minTimes[adjNode])
                {
                    minTimes[adjNode] = adjTime + currTime;
                    pq.push({minTimes[adjNode], adjNode});
                }
            }
        }
        int res = 0;
        for(int i = 0; i < V; i++)
        {
            if(minTimes[i] == INT_MAX)
                return -1;
            res = max(res, minTimes[i]);
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V;
        cin>>V;
        vector<vector<int>> edges;
        for(int i=0;i<v;i++)
        {
            int a,b;
            cin>>a>>b
            edges.push_back({a, b});
        }
        int src;
        cin>>src;
        Solution obj;
        int ans = obj.findDelayTime(V, edges, src);
        cout<<ans<<endl;
    }
}
  // } Driver Code Ends