// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
//Function to detect cycle in a directed graph.
// time complexity == O(E+V)
//since normal dfs call only
int c=0;
	bool iscyclic_util(vector<int> adj[],vector<bool> &vis,vector<bool> &order,int curr)
	{
	    int flag=0;
	    vis[curr]=true;
	    c++;
	    order[curr]=true;
	    for(auto x:adj[curr])
	    {
	        if(!vis[x])
	        {
	            bool f=iscyclic_util(adj,vis,order,x);
	            if(f)
	            return 1;
	        }
	        else if(order[x])
	        return 1;
	        
	    }
	   	   order[curr]=0; 
	   	 return 0; 
     }
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	vector<bool> vis(V,false);
	   	
	   	vector<bool> order(V,false);
	   	c=0;
	   	int flag=0;
	   	c=0;
	   	for(int i=0;i<V;i++)
	   	{
	   	    if(!vis[i])
    	   	{
    	   		c++;
    	   	        flag=iscyclic_util(adj,vis,order,i);
    	   	        if(c>=2)
    	   	        return false;
    	   	}       
	   	    
	   	}
	   //	if(c==V)
	   	 return true;
		
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
    	if(obj.isCyclic(V, adj) )
    	cout<<"YES";
    	else
    	cout <<"NO";
    	cout<< "\n";
    }

    return 0;
}

  // } Driver Code Ends
