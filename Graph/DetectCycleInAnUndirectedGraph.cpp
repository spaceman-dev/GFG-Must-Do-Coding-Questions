// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    bool dfs(vector<int>adj[], vector<bool> &vis, int n, int m)
    {
        vis[n] = 1;
        for(auto i : adj[n])
        {
            if(!vis[i])
            {
                if(dfs(adj, vis, i, n))
                    return 1;
            }
            else if(i != m || i == n)
                return true;
        }
        return false;
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    vector<bool> vis(V);
	    for(int i = 0 ; i < V ; i++)
	    {
	        if(!vis[i] && dfs(adj, vis, i, -1))
	            return true;
	    }
	    return false;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends