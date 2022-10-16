
//time complexity O(V+E)

class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
	bool dfs(int u,int p,vector<int> adj[],vector<bool> &vis)
	{
	    vis[u]=true;
	    for(auto i:adj[u])
	    {
	        if(!vis[i])
	        {
	            if(dfs(i,u,adj,vis))
	             return true;
	        }
	        
	        else if(i!=p||i==u)//i==u for self loop
	        return true;
	    }
	    return false;
	    
	}
	
	
	
	bool isCycle(int V, vector<int> adj[])
	{
	    vector<bool> vis(V);
	    int c=0;
	    
	    for(int i=0;i<V;i++)
	    
	        if(!vis[i]&&dfs(i,-1,adj,vis))
	        
	            
	         return true;   
	        
	   
	    return false;
	    
	    
	}
};

