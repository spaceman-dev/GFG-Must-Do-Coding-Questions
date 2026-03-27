// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int CheapestFlight(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        // Code here
        // adj List is pair of connected Vertex, cost of travel
        vector<vector<pair<int, int>>> adjList(n);
        // priority queue is a vector of 3 variables - Cost, Node, Hops
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        // edge case
        if(src == dst)
            return 0;
        // convert Input to Weighted Adjacency list;
        for(int i = 0; i < flights.size(); i++)
            adjList[flights[i][0]].push_back({flights[i][1], flights[i][2]});
        // initialize 2D destination Array
        vector<vector<int>> destHop(n+1, vector<int>(K+2, INT_MAX));
        // push first as source, its cost is 0, and hops is k+1
        pq.push({0, src, K+1});
        // standard Dijkstra's Algo, with small twist for number of hops
        while(!pq.empty())
        {
            vector<int> temp = pq.top();
            int node = temp[1];
            int nodeCost = temp[0];
            int hops = temp[2];
            pq.pop();
            // prune path if hops are 0, no need to check adj nodes of such a path
            if(hops == 0)
                continue;
            for(auto it : adjList[node])
            {
                int adjNode = it.first;
                int adjCost = it.second;
                if (adjCost + nodeCost < destHop[adjNode][hops-1])
                {
                    destHop[adjNode][hops-1] = adjCost + nodeCost;
                    pq.push({destHop[adjNode][hops-1], adjNode, hops-1});
                }
            }
        }
        // result will be the minimum of destHop[dst][0....k+1]
        int res = INT_MAX;
        for(int i = 0; i <= k; i++)
            res = min(res, destHop[dst][i]);
        return res == INT_MAX ? -1 : res;
    }
};
// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n, src, dst, K;
        cin>>n;
        vector<vector<int>> flights;
        for(int i=0;i<n;i++)
        {
            int u, v, w;
            cin>>u>>v>>w;
            flights.push_back({u, v, w});
        }
        cin>>src>>dst>>K
        Solution obj;
        int ans = obj.CheapestFlight(n, flights, src, dst, K);
        cout<<ans<<endl;
    }
}
  // } Driver Code Ends