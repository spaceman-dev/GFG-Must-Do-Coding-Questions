// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<vector<int>> graph(V, vector<int>(V, 0));
        for(int i = 0 ; i < V ; i++)
        {
            for(int j = 0 ; j < adj[i].size() ; j++)
                graph[i][adj[i][j][0]] = adj[i][j][1];
        }
        vector<int> dist(V, INT_MAX);
        queue<pair<int, int>> q;
        dist[S] = 0;
        q.push({0, S});
        while(!q.empty())
        {
            int u = q.front().second;
            q.pop();
            for(int v = 0 ; v < V ; v++)
            {
                if(graph[u][v] != 0 && dist[v] > dist[u] + graph[u][v])
                {
                    dist[v] = dist[u] + graph[u][v];
                    q.push({dist[v], v});
                }
            }
        }
        return dist;
    }
};


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}

  // } Driver Code Ends