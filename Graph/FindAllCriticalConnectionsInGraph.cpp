// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void dfs(int node, int parent, int &count, vector<vector<int>> &adjList, vector<int> &disc, vector<int> &low, vector<bool> &vis, vector<vector<int>> &res)
    {
	    vis[node] = true;
	    count++;
	    disc[node] = count;
	    low[node] = count;
	    for(int neighbor : adjList[node])
	    {
		    if(!vis[neighbor])
		    {
			    dfs(neighbor, node, count, adjList, disc, low, vis, res);
			    low[node] = min(low[node], low[neighbor]);
			    if(low[neighbor] > disc[node])
				    res.push_back({node, neighbor});
		    }
		    else if(neighbor != parent)
			    low[node] = min(low[node], disc[neighbor]);
	    }
	    return;
    }
    vector<vector<int>> criticalConnections(int v, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> res;
        // form adj list
        vector<vector<int>> adjList(v);
        for(int i = 0; i < edges.size(); i++)
        {
            adjList[edges[i][0]].push_back(edges[i][1]);
            adjList[edges[i][1]].push_back(edges[i][0]);
        }
        // visited bool array
        vector<bool> vis(v, 0);
        // first discovery time of node
        vector<int> disc(v, 0);
        // lowest discovery time of node
        vector<int> low(v, 0);
        int count = 0;
        dfs(0, -1, count, adjList, disc, low, vis, res);
        sort(res.begin(), res.end());
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
        int v;
        cin>>v;
        vector<vector<int>> edges;
        for(int i=0;i<v;i++)
        {
            int a,b;
            cin>>a>>b
            edges.push_back({a, b});
        }
        Solution obj;
        vector<vector<int>> critical = obj.criticalConnections(v, edges);
        for(int i=0;i<critical.size();i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<critical[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
  // } Driver Code Ends