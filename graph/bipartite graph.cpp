    
    
vector<int> adj[20001];
bool visited[20001],col[20001];
    bool dfs(int node,int c)
{
        
        
        
	visited[node]=1;
	col[node]=c;
	for(int child:adj[node])
	{
		if(visited[child]==0)
		{
			bool res =dfs(child,c^1);
			if(res==false)
				return false;
		}
		else if(col[node]==col[child])
		return false;
	}
	return true;
}
    
    
    bool possibleBipartition(int N, vector<vector<int>>& d) {
                int nodes=N,i;    
        
			for(vector<int>& p:d)
			{
				adj[p[0]-1].push_back(p[1]-1);
				
				adj[p[1]-1].push_back(p[0]-1);
			} 
			bool flag=true;
			for(i=1;i<=nodes;i++)
			{
				//cout<<"hi";
				if(visited[i]==false)
				{
					bool res=dfs(i,0);
					if(res==false)
						flag=false;
				}
			}
			if(flag==false)
		        return false;
			else
                return true;
        
        
        
    }
