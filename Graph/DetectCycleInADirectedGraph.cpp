// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
	//Function to detect cycle in a directed graph
	bool dfs(int V, vector<int> adj[], bool vis[], bool isPresent[])
	{
	    vis[V] = true;
	    isPresent[V] = true;
	    for(auto it : adj[V])
	    {
	        if(!vis[it])
	        {
	            if(dfs(it, adj, vis, isPresent))
	                return true;
	        }
	        else if(isPresent[it])
	            return true;
	    }
	    isPresent[V] = false;
	    return false;
	}
	bool isCyclic(int V, vector<int> adj[])
	{
	   	// code here
	   	bool vis[V+1] = {false}, isPresent[V+1] = {false};
	   	for(int i = 0 ; i < V ; i++)
	   	{
	   	    if(!vis[i])
	   	    {
	   	        if(dfs(i, adj, vis, isPresent))
	   	            return true;
	   	    }
	   	}
	   	return false;
	}
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends