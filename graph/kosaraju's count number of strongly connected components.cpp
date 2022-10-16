// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	
	//algo
	//1 input graph
	//2 reverse graph
	//3 order vector
	//4 dfs input graph
	//5 dfs in rev graph
    vector<int> order;
    void dfs(int src,vector<int> &vis,vector<int> adj[])
    {
        
        vis[src]=true;
        for(auto i:adj[src])
        {
            if(!vis[i])
             dfs(i,vis,adj);
        }
        order.push_back(src);
        
    }
    void rdfs(int src,vector<int> &vis1,vector<int> rev[])
    {
        
        vis1[src]=true;
        for(auto i:rev[src])
        {
            if(!vis1[i])
             dfs(i,vis1,rev);
        }
    }
    int kosaraju(int V, vector<int> adj[])
    {
        order.clear();
        vector<int> rev[V];
        for(int y=0;y<V;y++)
        {
            for(auto x:adj[y])
            {
                rev[x].push_back(y);
            }
        }
        vector<int> vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            dfs(i,vis,adj);
        }
        
        vector<int> vis1(V,0);
        int c=0;
        for(int i=V-1;i>=0;i--)
        {
            if(!vis1[order[i]])
            {
                   c++;
                  rdfs(order[i],vis1,rev); 
            }
        }
        return c;
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
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends
